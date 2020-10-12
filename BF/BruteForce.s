global BF
section .text
BF: ;start
    xor rax, rax ;rax = 0
    xor r10, r10 ;length
    xor r11, r11 ;rcx counter
    xor r9, r9   ;length
    mov r8, rdi  ;input length
    
    mov rcx, rsi ;length
    mov byte [r9], 0

start:
    xor r11, r11 ;if loop than make r11 to zero
    add byte [r9+r10], 1
    jmp cmp_

cmp_:
    cmp [r9+r11], 33 ;check r9+r11's ascii code
    jb update_zero        ;jump update
    cmp [r9+r11], 127
    jae update_lower
    mov rdx, [r8+r11];rdx = [r8+r11]
    cmp [r9+r11], rdx
    jne start
    inc r11
    loop cmp_
    jmp done

update_zero:
    mov [r9+r11], 32 ;
    jmp start

update_lower:
    ;TODO

done:
    ret          ;return