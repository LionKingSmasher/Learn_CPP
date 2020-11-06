
global test
section .text

%define e(x) (x^0x1f)
%define e2(x) ((x<<2)^0xef^x^e(x))

test:
	mov rax, rdi
	xor r8, r8
	xor r9, r9

start:
;	add byte [rax], 1
	xor byte [rax+r8], e(0x21)
	inc r8
	cmp byte [rax+r8+1], 0x00
	jne start
	ret