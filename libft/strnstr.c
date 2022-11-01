#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t len)
{
    size_t  i;
    size_t  i1;

    i = 0;
 
    if (s2[0] == '\0')
        return ((char *) s1);
    while (s1[i] != '\0')
    {
        i1 = 0;
        while (s1[i + i1] == s2[i1] && (i + i1) < len)
        {
            if (s2[i1 + 1] == '\0')
                return ((char *) &s1[i]);
            i1++;
        }
        i++;
    }
    return (0);
}
/*
int main()
{
    char s[] = "Xau pequninocoisa";
    char s1[] = "i";
    char *tt;
    char *xx;

    tt = ft_strnstr(s, s1, 10);

    printf("%s", tt);

}*/