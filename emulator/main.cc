#include <iostream>
#include <cinttypes>

typedef uint_least8_t u8; //Same as unsigned char
typedef uint_least16_t u16; //Same as unsigned Short
typedef uint_least32_t u32; //Same as unsigned int

struct Mem //Memory
{
  static constexpr u32 MAX_MEM = 1024 * 64;
  u8 Data[MAX_MEM];
  void Initalize()
  {
    for(u32 i = 0; i < MAX_MEM; i++)
    {
      Data[i] = 0;
    }
  }
};

/* 임시 폐기 조치
template<unsigned bitno, typename T=u8>
struct Regbit{
  T data;
  enum {mask = (1u << bitno)-1u};
  Regbit(T a) : data(a) { }
  Regbit& operator=(T val)
  {
    data = val;
    return *this;
  }
};
*/

struct CPU //6502
{
  u16 PC; //Program Counter
  u16 SP; //Stack Pointer
  u8  ACC; //Accumulator
  u8  RX; //Register X
  u8  RY; //Regitser Y

  u8 C : 1; //Carry Flag
  u8 Z : 1; //Zero Flag
  u8 I : 1; //Interrupt Disable Flag
  u8 D : 1; //Decimal Mode Flag
  u8 B : 1; //Break Command Flag
  u8 V : 1; //Overflow Flag
  u8 N : 1; //Negative Flag

  /* 오류로 일단 폐기조치
  //********************Process Status***********************
  Regbit<0> C(1); //Carry Flag
  Regbit<1> Z(1); //Zero Flag
  Regbit<2> I(1); //Interrupt Disable Flag
  Regbit<3> D(1); //Decimal Mode Flag
  Regbit<4> B(1); //Break Command Flag
  Regbit<6> V(1); //Overflow Flag
  Regbit<7> N(1); //Negative Flag
  //*********************************************************
  */

  void Reset(Mem& memory) //설명할게 있나? 리셋
  {
    PC = 0xFFFC; //모스 6502계열의 CPU는 리셋주소가 0xFFFC이다.
    SP = 0x0100;
    C=0; Z=0; I=0; D=0; B=0; V=0; N=0; //코모도어 64의 초기화 리셋코드에 따르면 flag들을 Clear한다.
    ACC = RX = RY = 0;
    memory.Initalize();
  }
};

int main()
{
  CPU cpu;
  Mem mem;
  cpu.Reset(mem);
}
