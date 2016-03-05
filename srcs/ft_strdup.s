global _ft_strdup
extern malloc
extern _ft_strlen

_ft_strdup:
    push rdi
    call _ft_strlen
    push rax
    mov rdi, rax
    call malloc
    mov rdi, rax
    pop rcx
    pop rsi
    rep movsb
    ret
