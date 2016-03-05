# ifndef LIBASM_H
# define LIBASM_H

#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#ifdef __linux
    extern void*        _ft_memcpy(void *dest, void *src, size_t size);
    extern void*        _ft_memset(void *dest, int c, size_t size);
    extern void*        _ft_calloc(size_t size);
	extern void			_ft_putstr(const char *str);
	extern void		    _ft_puts(const char *str);
	extern void		    _ft_putchar(const char c);
    extern void         _ft_bzero(void *ptr, size_t size);
    extern char*        _ft_strcat(char *dest, const char *src);
    extern char*        _ft_strdup(const char *);
    extern char*        _ft_strnew(size_t n);
    extern char*        _ft_strchr(char*str, char c);
	extern int			_ft_strlen(const char *str);
    extern int          _ft_isupper(int i);
    extern int          _ft_islower(int c);
    extern int          _ft_isalpha(int c);
    extern int          _ft_isdigit(int c);
    extern int          _ft_isalnum(int c);
    extern int          _ft_isacii(int c);
    extern int          _ft_isprint(int c);
    extern int          _ft_toupper(int c);
    extern int          _ft_tolower(int c);
    extern int          _ft_cat(int);
    extern int          _ft_strcmp(const char* s1, const char* s2);
    #define ft_memset   _ft_memset
    #define ft_memcpy   _ft_memcpy
	#define ft_putstr   _ft_putstr
    #define ft_puts     _ft_puts
    #define ft_putchar  _ft_putchar
    #define ft_bzero        _ft_bzero
	#define ft_strlen   _ft_strlen
    #define ft_isupper  _ft_isupper
    #define ft_islower  _ft_islower
    #define ft_isalpha  _ft_isalpha
    #define ft_isdigit  _ft_isdigit
    #define ft_isalnum  _ft_isalnum 
    #define ft_isascii  _ft_isacii
    #define ft_isprint  _ft_isprint
    #define ft_toupper  _ft_toupper
    #define ft_tolower  _ft_tolower
    #define ft_strcat   _ft_strcat
    #define ft_strdup   _ft_strdup
    #define ft_cat      _ft_cat
    #define ft_strnew   _ft_strnew
    #define ft_strchr   _ft_strchr
    #define ft_calloc   _ft_calloc
    #define ft_strcmp   _ft_strcmp

#else
	extern int		    ft_strlen(const char *str);
	extern void		    ft_putstr(const char *str);
	extern void		    ft_puts(const char *str);
	extern void		    ft_putchar(const char c);
    extern int          ft_isupper(int i);
    extern int          ft_islower(int c);
    extern int          ft_isalpha(int c);
    extern int          ft_isdigit(int c);
    extern int          ft_isalnum(int c);
    extern int          ft_isacii(int c);
    extern int          ft_isprint(int c);
    extern int          ft_toupper(int c);
    extern int          ft_tolower(int c);

# endif

# endif
