#include "libasm.h"
#include <errno.h>

static void     _printError(char *path) {
    ft_putstr("ft_cat: ");
    ft_putstr(path);
    ft_putstr(": ");
    ft_puts(strerror(errno));
}

static void    _cat(char *path)
{
    int ret;
    int fd;
    
    fd = 0;
    ret = 0;
    if ((fd = open(path, S_IRUSR)) != -1)
    {
        if ((ret = ft_cat(fd)) != 0)
            _printError(path);
    }
    else
        _printError(path);
}

int main (int ac, char**av) {
    int i;

    i = 1;
    if (ac > 1) {
        while (i < ac)
        {
            _cat(av[i]);
            ++i;
        }

    } else {
        ft_cat(0); 
    }
}
