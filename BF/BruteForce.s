
global BF
section .text
BF:
	mov rax, rdi
	mov byte [rax+2], 67
	ret