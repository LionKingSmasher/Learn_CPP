#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <array>
#include <cmath>


uint32_t rotateRight(uint32_t x, uint32_t n) {

    //if n=4, x=0x12345678:

    //shifted = 0x12345678 >> 4 = 0x01234567
    uint32_t shifted = x >> n;

    //rot_bits = (0x12345678 << 28) = 0x80000000
    uint32_t rot_bits = x << (32-n);

    //combined = 0x80000000 | 0x01234567 = 0x81234567
    uint32_t combined = shifted | rot_bits;

    return combined;
}

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

uint32_t Rotate(std::array<uint32_t, 64> Key){ 
  for(int i = 0; i<64; i+=8){
    Key[i] =
  }
}

uint32_t S(char in, uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
  return (~in & a) ^ (in & ~b) ^ (~in & ~c) ^ ~(in & d);
}

uint32_t S1(char in, uint32_t a, uint32_t b, uint32_t c, uint32_t d){
  return rotateRight(a, 3) ^ ~rotateRight(b, 30) ^ (c | ~d) | in;
}

uint32_t S2(char in, uint32_t a, uint32_t b, uint32_t c, uint32_t d){
  return rotateRight((in | a), (a >> 28)) | ((c | d) % d);
}

std::array<uint32_t, 64> Crypt(char *input, std::array<uint32_t, 64> Key) {
  std::array<uint32_t, 64> return_crypto;
  for(int j = 0; j<256; j++){
    for(int i = 0; i < 64; i++){
      switch(i%4){
      case 0:
        return_crypto[i] = S(input[i%strlen(input)], Key[i%64], Key[(i+1)%64], Key[(i+2)%64], Key[(i+3)%64]);
        return_crypto[(i+1)%64] = return_crypto[i];
        return_crypto[i] = S1(input[i%strlen(input)], return_crypto[i], Key[(i+4)%64], Key[(i+5)%64], Key[(i+6)%64]);
        break;
      case 1:
        return_crypto[i] = S1(input[i%strlen(input)], Key[i%64], Key[(i+3)%64], Key[(i+5)%64], Key[(i+7)%64]);
        return_crypto[(i+2)%64] = return_crypto[i];
        return_crypto[(i+1)%64] = S2(input[i%strlen(input)], return_crypto[i], Key[(i+2)%64], Key[(i+4)%64], Key[(i+6)%64]);
        break;
      case 2:
        return_crypto[i] = S2(input[i%strlen(input)], return_crypto[(i-1)%64], Key[(i+1)%64], return_crypto[(i-2)%64], Key[(i+2)%64]);
        return_crypto[i] <<= 3;
        return_crypto[(i+1)%64] = S(input[i%strlen(input)], return_crypto[i], return_crypto[(i-1)%64], return_crypto[(i-2)%64], return_crypto[(i-3)%64]);
        break;
      case 3:
        return_crypto[i] = S2(input[i%strlen(input)], return_crypto[(i-1)%64], Key[(i-2)%64], return_crypto[(i-3)%64], Key[(i-4)%64]);
        break;
      }
    }
    Key = return_crypto;
  }
  return return_crypto;
}

int main(){
  char input[40];
  printf("입력: ");
  scanf("%s", input);
  for(int i = 0; i < 64; i++){
    printf("%x", Crypt(input, K())[i]);
  }
  printf("\n");
}
