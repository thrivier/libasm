global _ft_strchr

_ft_strchr:
    xor rcx, rcx
    mov rax, rsi
.chr:
    cmp byte[rdi + rcx], 0
    je .end
    cmp byte[rdi + rcx], al
    je .finded
    inc rcx
    jmp .chr

.end:
    xor rax, rax
    ret

.finded:
    lea rax, [rdi + rcx]
    ret

