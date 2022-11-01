#include <stdio.h>


void    *ft_memset(void *str, int c, size_t n)
{
    size_t i;
    char    *str1;

    i = 0;
    str1 = str;
    while (i < n)
    {
        str1[i] = c;
        i++;
    }
    return ((void *)str1);
}

int main()
{
    char s[] = "ola aorac";
    char c = 'c';
    char *tt;

    tt = ft_memset(s, c, 3);
    printf("%s", tt);
}