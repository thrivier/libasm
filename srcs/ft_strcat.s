global _ft_strcat
extern _ft_strlen
extern _ft_memcpy

_ft_strcat:
    push rbp
    mov rbp, rsp
    push rdi
    call _ft_strlen
    lea rcx, [rdi + rax]
    push rcx
    mov rdi, rsi
    call _ft_strlen
    mov byte [rcx + rax], 0
    mov rdx, rax
    mov rsi, rdi
    pop rdi
    call _ft_memcpy
    pop rax
    leave
    ret

