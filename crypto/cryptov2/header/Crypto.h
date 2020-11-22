#ifndef __CRYPTO_H__
#define __CRYPTO_H__
typedef char* SCRYPTO; //문자열 선언
extern "C" {
	SCRYPTO test(SCRYPTO input); //암호 입력 함수
}
#endif