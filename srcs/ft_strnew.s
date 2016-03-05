global _ft_strnew
extern _ft_calloc

_ft_strnew:
    inc rdi
    call _ft_calloc
    ret

