global _ft_strlen

_ft_strlen:
    push rbp
    mov rbp, rsp
    xor rax, rax
_loop:
    cmp byte [rdi], 0
    je _end
    inc rax
    inc rdi
    jmp _loop

_end:
    leave
    ret
