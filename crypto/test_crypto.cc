#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <array>
#include <cmath>

std::array<uint32_t, 64> K(){
  double PrimeList[] = {
    2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
    31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
    73, 79, 83, 89, 97, 101, 103, 107, 109, 113,
    127, 131, 137, 139, 149, 151, 157, 163, 167, 173,
    179, 181, 191, 193, 197, 199, 211, 223, 227, 229,
    233, 239, 241, 251, 257, 263, 269, 271, 277, 281,
    283, 293, 307, 311
  };

  std::array<uint32_t, 64> return_K;

  for(int i = 0; i<64; i++){
    auto v = std::cbrt(PrimeList[i]);
    v -= static_cast<uint32_t>(v);
    v *= std::pow(16, 8);
    return_K[i] = static_cast<uint32_t>(v);
  }
  return return_K;
}

uint32_t S(char in, uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
  return (~in & a) ^ (in & ~b) ^ (~in & ~c) ^ ~(in & d)
}

std::array<uint32_t, 64> Crypt(char *input, std::array<uint32_t, 64>) {
  std::array<uint32_t, 64> return_crypto;
  for(int i = 0; i < strlen(input); i++){
    switch(i%4){
    case 0:

      break;
    }
  }
  return return_crypto;
}

int main(){
  for(int i = 0; i < 64; i++){
    printf("%x ", KEY(K())[i]);
  }
  printf("\n");
}
