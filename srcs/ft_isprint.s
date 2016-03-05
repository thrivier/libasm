global _ft_isprint

_ft_isprint:
    cmp rdi, 32
    jl .not
    cmp rdi, 127
    jge .not
    mov rax, 16384
    ret

.not:
    xor rax, rax
    ret
