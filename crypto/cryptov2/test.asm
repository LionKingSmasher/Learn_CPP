global test

section .text

_encrypt_:
	db 0x62, 0x38, 0x22, 0x3B, 0xF0, 0xCC, 0xA2, 0xFF

%define e(x) (x^0x1f)
%define e2(x) ((x<<2)^0xef^x^e(x))

test:
	mov rax, rdi
	xor r8, r8
	xor r9, r9 ;_encrypt_ loop
	xor r10, r10 ;_encrypt_
	jmp start

reduce_r9:
	xor r9, r9 ; make r9 registers to 0
	jmp crypt

start:
;	add byte [rax], 1
	xor byte [rax+r8], e(0x21)
	inc r8
	cmp r9, 0x07 ; r9 > 7
	ja reduce_r9

crypt:
	mov dl, byte [_encrypt_+r9]
	inc r9
	xor byte [rax+r8], dl
	cmp byte [rax+r8+1], 0x00
	jne start
	
	ret ;return Crypting Text