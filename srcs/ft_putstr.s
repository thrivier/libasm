global _ft_putstr
extern _ft_strlen

_ft_putstr:
	push rbp
	mov rbp, rsp
	call _ft_strlen

	mov rdx, rax
	mov rsi, rdi
	mov rdi, 1
	mov rax, 0x2000004
	syscall
	leave
	ret
