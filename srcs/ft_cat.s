global _ft_cat
extern malloc
extern read
extern write

%define SIZE 4096

_ft_cat:
    push rbp
    mov rbp, rsp
    push rdi
    mov rdi, SIZE
    call malloc
    pop rdi
    mov rsi, rax

.read
    push rdi
    push rsi
    mov rdx, SIZE
    call read
    cmp rax, 0
    jle .end
    pop rsi
    push rsi
    mov rdi, 1
    mov rdx, rax
    call write
    pop rsi
    pop rdi
    jmp .read
.end:
    leave
    ret


    
