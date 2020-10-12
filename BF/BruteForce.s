
global BF
section .text
BF:
	xor rax, rax ;0으로 초기화
	xor r10, r10 ;브루트 포스 대상 문자열 길이
	xor r11, r11 ;브루트 포스 rcx 카운터
	xor r9, r9 ;브루트포스 대상 문자열
	mov r8, rdi ;문자열
	mov rcx, rsi ;문자열 길이
	mov byte [r9], 0

start:
	add byte [r9+r10], 1
	jmp cmp_

done:
	ret

cmp_:
	cmp [r9+r11], 33
	jb update
	mov rdx, [r8+r11]
	cmp [r9+r11], rdx
	jne start
	inc r11
	loop cmp_
	jmp done

update:
	jmp start