#include "libft.h"
#include <stdio.h>
#include <assert.h>

int main() {
    printf("[ft_strlen] should find the good len\n");
    assert(ft_strlen("First test with strlen\n") == 23);

    printf("[ft_putstr] should print toto\n");
    ft_putstr("toto\n");

	printf("[ft_puts] should print with a \\n \n");
	ft_puts("Hello, world!");

	const char *str = "Hihihi work?\n";
	int i = 0;
	printf("len %d\n", ft_strlen(str));
	while (str[i]) {
		ft_putchar(str[i]);
		++i;
	}
    return 0;
}
