global sum
section .text
sum:
	mov rdx, rdi
	dec rdx
	mov r8, rsi
	xor rax, rax
	jmp start

start:
	inc rdx
	add rax, rdx
	cmp r8, rdx
	jne start
	ret