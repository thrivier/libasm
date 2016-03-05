global _ft_isalpha
extern _ft_isupper
extern _ft_islower

_ft_isalpha:
    call _ft_isupper
    cmp rax, 0
    jne  .alpha
    call _ft_islower
    cmp rax, 0
    jne .alpha
    ret

.alpha:
    mov rax, 1024
    ret
