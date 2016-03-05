global _ft_strcmp

_ft_strcmp:
.cmp:
    cmp byte [rdi], 0
    je .end
    cmp byte [rsi], 0
    je .end
    inc rdi
    inc rsi
    cmp rdi, rsi
    je .cmp

.end
    cmp rdi, rsi
    je .equal
    jl .lower
    jg .greater

.equal:
    xor rax, rax
    ret
.lower:
    mov rax, -1
    ret
.greater:
    mov rax, 1
    ret

