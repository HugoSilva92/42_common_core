#include <stdio.h>
#include <strings.h>

void    bzero(void *s, size_t n)
{
    size_t  i;
    char *tt;

    i = 0;
    tt = s;
    while (i < n)
    {
        tt[i] = '\0';
        i++;
    }
}

int main()
{
    char qq[] = "ola tudo bem";
    
    bzero(qq, 12);
    printf("%s", qq);
}