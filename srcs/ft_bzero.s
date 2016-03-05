global _ft_bzero

_ft_bzero:
;_loop:
;    cmp rsi, 0
;    je .end
;    dec rsi
;    mov byte [rdi + rsi], 0
;    jmp _loop
;.end:
;    ret
    
    push rdi
    push rcx
    mov rcx, rsi
    xor rax, rax
    rep stosb
    pop rcx
    pop rax
    ret
