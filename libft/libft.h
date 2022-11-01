#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

size_t  ft_strlen(const char *str);
void    *ft_strnstr(const char *s1, const char *s2, size_t len);
void    *ft_memset(void *str, int c, size n);
void    *ft_strrchar(const char *str, int c);
void    ft_bzero(void *str, size_t n);
void    ft_memcpy(void *dest, const void *src, size_t n);
int *ft_strncmp(const char *s1, const char *s2, size_t n);
void    *ft_memcpy(void *dest, const void *src, int c, size_t n);
int ft_atoi(const char *str);
void    *ft_memmove(void *dest, const void *src, size_t n);
int ft_isalpha (int c);
void    *ft_memchr(const void *str, int c, size_t n);
int ft_isdigit(int c);
int ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_isalnum(int c);
size_t  ft_strlen(const char *str);
int ft_isascii(int c);
size_t  ft_strlcpy(char *dest, const char *src, size_t n);
int ft_isprint(int c);
size_t  ft_strlcat(char *dest, const char *src, size_t destlen);
int ft_toupper(int c);
char    ft_strchr(const char *str, int c);
int ft_tolower(int c);

#endif