global _ft_isalnum
extern _ft_isdigit
extern _ft_isalpha

_ft_isalnum:
    call _ft_isdigit
    cmp rax, 0
    jne .alnum
    call _ft_isalpha
    cmp rax, 0
    jne .alnum

.end:
    ret

.alnum: 
    mov rax, 8
    jmp .end
    
