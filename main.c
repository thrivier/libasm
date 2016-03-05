#include "libasm.h"
#include <stdio.h>
#include <assert.h>
#include <string.h>

void    check(const char *name, int (*mine)(int), int (*real)(int))
{
    ft_putstr("test ");
    ft_puts(name);
    int i = 0;
    while (i < 255) {
        if (mine(i) != real(i)) {
            printf("%s failed with %d\n", name, i);
            printf("mine : %d\n", mine(i));
        }
        ++i;
    }
}

void test_strlen() {
    ft_puts("test [strlen]");
    assert(ft_strlen("") == strlen(""));
    assert(ft_strlen("a") == strlen("a"));
    assert(ft_strlen("toto") == strlen("toto"));
    assert(ft_strlen("toto and tata") == strlen("toto and tata"));
    assert(ft_strlen("\n") == strlen("\n"));
    assert(ft_strlen("\t\t") == strlen("\t\t"));
    assert(ft_strlen("hihi \t") == strlen("hihi \t"));
    assert(ft_strlen("Hello, world\n") == strlen("Hello, world\n"));
}

void test_bzero() {
    ft_puts("test [bzero]");
    char ptr[42];
    char ptr2[42];
    int i;

    i = 0;
    while (i < 42) {
        ptr[i] = 'z';
        ptr2[i] = 'z';
        ++i;
    }
    ptr[41] = '\0';
    ptr2[41] = '\0';
    assert(strcmp(ptr, ptr2) == 0);
    bzero(ptr, 4);
    ft_bzero(ptr2, 4);
    assert(strcmp(ptr, ptr2) == 0);

    i = 0;
    while (i < 42) {
        ptr[i] = 'z';
        ptr2[i] = 'z';
        ++i;
    }
    bzero(ptr, 16);
    ft_bzero(ptr2, 16);
    assert(strcmp(ptr, ptr2) == 0);

    bzero(ptr, 0);
    ft_bzero(ptr2, 0);
    assert(strcmp(ptr, ptr2) == 0);

    i = 0;
    while (i < 42) {
        ptr[i] = 'z';
        ptr2[i] = 'z';
        ++i;
    }

    bzero(ptr, 21);
    ft_bzero(ptr2, 21);
    assert(strcmp(ptr, ptr2) == 0);

    i = 0;
    while (i < 42) {
        ptr[i] = 'z';
        ptr2[i] = 'z';
        ++i;
    }

    bzero(ptr + 20, 21);
    ft_bzero(ptr2 + 20, 21);
    assert(strcmp(ptr, ptr2) == 0);

    i = 0;
    while (i < 42) {
        ptr[i] = 'z';
        ptr2[i] = 'z';
        ++i;
    }

    bzero(ptr, 42);
    ft_bzero(ptr2, 42);
    assert(strcmp(ptr, ptr2) == 0);
}

void test_strcat() {
    ft_puts("test [strcat]");
    char dest[] = "aaaaaaaa";
    char dest2[] = "aaaaaaaa";
    dest[4] = '\0';
    dest2[4] = '\0';
    char src[] = "z";
    char src2[] = "z";
    assert(!strcmp(ft_strcat(dest, src), strcat(dest2, src2)));
}

void test_memcpy() {
    ft_puts("test [memcpy]");
    char dest[] = "123456789";
    char dest2[] = "123456789";
    char src[] = "555555555";
    char src2[] = "555555555";
    assert(!strcmp(ft_memcpy(dest, src, 5), memcpy(dest2, src2, 5)));
}

void test_memset() {
    ft_puts("test [memset]");
    char str[21];
    char str2[21];
    str[5] = '\0';
    str2[5] = '\0';
    ft_memset((void*)str,'a', 5);
    memset((void*)str2, 'a', 5);
    assert(!strcmp(str, str2));
}

void test_strdup() {
   char *str =  ft_strdup("test [strdup]");
   ft_puts(str);
   free(str);
}

void test_calloc() {
    void *ptr;
    char str[] = "test [calloc]";
    int len;

    len = ft_strlen(str);
    ptr = ft_calloc(len);
    ft_memcpy(ptr, (void*)str, len);
    ft_puts(str);
}

void test_strnew() {
    char *str;
    int len;

    ft_strnew(0);
    len = ft_strlen("test [strnew]");
    str = ft_strnew(len);
    ft_memcpy(str, "test [strnew]", len);
    ft_puts(str);
    free(str);
}

void test_strchr() {
    ft_puts(ft_strchr("wjergbwjgwekrjgn test [strchr]", 't'));
    char str[] = "abcdef";
    assert(ft_strchr(str, 'a') == strchr(str, 'a'));
    assert(ft_strchr(str, 'f') == strchr(str, 'f'));
    assert(ft_strchr(str, 'c') == strchr(str, 'c'));
    assert(ft_strchr(str, 'z') == strchr(str, 'z'));
}

void    test_strcmp() {
    ft_puts("test [strcmp]");
    assert(ft_strcmp("abcd1", "abcd1") == strcmp("abcd1", "abcd1"));
    assert(ft_strcmp("", "") == strcmp("", ""));
    assert(ft_strcmp("abcd1", "abcd2") == strcmp("abcd1", "abcd2"));
    assert(ft_strcmp("abcd2", "abcd1") == strcmp("abcd2", "abcd1"));
}

int main() {
    //ft_putchar('-');
    ft_putstr("#################\n");
    test_strlen();
    test_bzero();
    test_strcat();
    test_memcpy();
    test_memset();
    test_strdup();
    test_calloc();
    test_strnew();
    test_strchr();
    test_strcmp();
    check("[isupper]", ft_isupper, isupper);
    check("[isalpha]", ft_isalpha, isalpha);
    check("[islower]", ft_islower, islower);
    check("[isdigit]", ft_isdigit, isdigit);
    check("[isalnum]", ft_isalnum, isalnum);
    check("[isacii]", ft_isascii, isascii);
    check("[isprint]", ft_isprint, isprint);
    check("[toupper]", ft_toupper, toupper);
    check("[tolower]", ft_tolower, tolower);
    ft_puts("#################");
    return 0;
}
