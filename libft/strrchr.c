#include <stdio.h>
#include <string.h>


char *strrchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    while (str[i] != c && i > 0)
        i--;
    if (i == 0 && str[i] != c)
        return (0);
    return ((char *)str + i);
}

int main () {
   int len;
   const char str[] = ",ttp://www.tutorialspoint.com";
   const char ch = ',';
   char *ret;

   ret = strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}