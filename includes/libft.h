# ifndef LIBFT_H
# define LIBFT_H

#ifdef __linux
	extern  int			_ft_strlen(const char *str);
	extern void			_ft_putstr(const char *str);
	#define ft_putstr  _ft_putstr
	#define ft_strlen  _ft_strlen

#else
	extern int		ft_strlen(const char *str);
	extern void		ft_putstr(const char *str);
	extern void		ft_puts(const char *str);
	extern void		ft_putchar(const char c);

# endif

# endif
