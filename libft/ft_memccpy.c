#include <stdio.h>
#include <string.h>

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t  i;

    i = 0;
    if (!dest && !src)
        return (0);
    while (i < n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *) src)[i];
        if (((unsigned char *)src)[i] == (unsigned char)c)
            return (dest + i + 1);
        i++;
    }
    return (0);
}


int main( void ) {

   char buffer[61];
   char puffer[61];
   char *pdest;
   char *ft_pdest;
   char string1[60] = "Taj Mahal is a historic monument in India.";
   printf( "Function: _memccpy 42 characters or to character 'c'\n" );
   printf( "Source: %s\n", string1 );
   pdest = _memccpy( buffer, string1, 'c', 42);
   ft_pdest = ft_memccpy( puffer, string1, 'c', 42);
   *pdest = '\0';
   printf( "Result: %s\n", buffer );
   printf( "Result: %s\n", puffer );
}