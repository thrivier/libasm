global _ft_toupper
extern _ft_islower

_ft_toupper:
    push rbp
    mov rbp, rsp
    call _ft_islower
    cmp rax, 0
    mov rax, rdi
    jne .up

.end:
    leave
    ret

.up: 
    sub rax, 32
    jmp .end
