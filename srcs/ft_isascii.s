global _ft_isacii

_ft_isacii:
    cmp rdi, 0
    jl  .not
    cmp rdi, 127
    jg .not
    mov rax, 1
    ret

.not:
    xor rax, rax
    ret
    
