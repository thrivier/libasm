global _ft_islower

_ft_islower:
    cmp rdi, 96
    jle .not
    cmp rdi, 123
    jge .not
    mov rax, 512
    ret

.not:
    mov rax, 0
    ret
