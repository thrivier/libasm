
#include "libft.h"
#include <stdio.h>
#include <assert.h>

int main() {
    printf("[ft_strlen] should find the good len\n");
    assert(ft_strlen("hello, world!\n") == 14);
    printf("[ft_putstr] should print toto\n");
    ft_putstr("toot\n");
    return 0;
}
