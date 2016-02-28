global _ft_puts
extern _ft_putstr
extern _ft_strlen


_ft_puts
	push rbp
	mov rbp, rsp
	call _ft_putstr
	mov rdi, 1
	mov rsi, EOL
	mov rdx, 1
	mov rax, 0x2000004
	syscall
	leave
	ret

EOL: db 10, 0
