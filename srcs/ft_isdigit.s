global _ft_isdigit

_ft_isdigit:
    cmp rdi, 47
    jle .not
    cmp rdi, 58
    jge .not
    mov rax, 2048 
    ret

.not:
    mov rax, 0
    ret


