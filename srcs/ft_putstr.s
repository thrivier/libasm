global _ft_putstr
extern _ft_strlen

_ft_putstr:
	call _ft_strlen
	mov rdx, rax
	mov rsi, rdi
	mov rdi, 1
	mov rax, 1
	syscall
	ret
