global _ft_putchar
extern _write

_ft_putchar:
	push rbp
	mov rbp, rsp
	xor rsi, rsi
	mov rdx, 1
	mov rsi, rdi
	mov rdi, 1
	mov rax, 0x2000004
	syscall
	leave
	ret
