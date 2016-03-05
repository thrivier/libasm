global _ft_isupper

_ft_isupper:
    cmp rdi, 64
    jle .not
    cmp rdi, 91
    jge .not
    mov rax, 256
    ret

.not:
    mov rax, 0
    ret
