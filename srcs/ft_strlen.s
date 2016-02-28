global _ft_strlen

_ft_strlen:
    push rbp
    mov rbp, rsp
    xor rax, rax
_loop:
    cmp byte [rdi + rax], 0
    je _end
    inc rax
    jmp _loop

_end:
    leave
    ret
