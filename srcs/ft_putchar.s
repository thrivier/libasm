global _ft_putchar
extern write

_ft_putchar:
    xor rax, rax
    mov rax, rdi
    rep stosb
    mov rsi, rdi
    mov rdi, 1
    mov rdx, 1
    call write
    ret

