global _ft_calloc
extern malloc
extern _ft_bzero

_ft_calloc:
    push rdi
    call malloc
    pop rsi
    mov rdi, rax
    call _ft_bzero
    ret

    
