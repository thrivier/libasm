global _ft_memset

_ft_memset:
    push rdi
    push rcx
    mov rcx, rdx
    mov rax, rsi
    rep stosb
    pop rcx
    pop rax
    ret

