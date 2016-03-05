global _ft_tolower
extern _ft_isupper

_ft_tolower:
    call _ft_isupper
    cmp rax, 0
    mov rax, rdi
    jne .low

.end:
    ret

.low:
    add rax, 32
    jmp .end
