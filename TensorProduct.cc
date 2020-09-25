#include <iostream>
#include <functional>

template<unsigned h, unsigned w>
struct Tensor{
  unsigned height = h; //행
  unsigned weight = w; //열
  float u[h][w];
  template<typename ...T>
  Tensor(T... args) : u{ args... } { }
  inline float showNumber(unsigned a, unsigned b) { return u[a][b]; }
  Tensor operator+(Tensor& ref) {
    Tensor<h,w> result;
    for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++){
        result.u[i][j] = u[i][j] + ref.u[i][j];
      }
    }
    return result;
  }
};

int main(){
  Tensor<2, 2> xy1{ 1.f, 2.f, 3.f, 4.f }, xy2{4.f, 5.f, 6.f, 7.f};
  Tensor<2, 2> r = xy1+xy2;
  std::cout << xy1.showNumber(1, 1) << std::endl;
  std::cout << r.showNumber(1, 1) << std::endl;
}
