#include <stdio.h>
#include <string.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;
    const char *s;
    char *s1;

    if (!dest && !src)
        return (0);
    i = 0;
    s = (char *)src;
    s1 = dest;
    while (i < n)
    {
        s1[i] = s[i];
        i++;
    }
    return (dest);
}

#include <stdio.h>
#include <string.h>

int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}