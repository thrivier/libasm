global _ft_putstr
extern _ft_strlen

_ft_putstr:
    push rbp
    mov rbp, rsp
    mov rbx, rsi
    call _ft_strlen

    mov rdx, rax
    mov rcx, rbx
    mov rbx, 1
    mov rax, 4
    syscall

_end:
    leave
    ret
