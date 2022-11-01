#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while ((str[i] > 9 && str[i] < 13) || str[i] == 32)
        i++;
    if (str[i] == 45)
    {
        sign = -1;
        i++;
    }
    else if (str[i] == 43)
        i++;
    while (str[i] >= 48 && str[i] <= 57)
    {
        result *= 10;
        result += (str[i] - '0');
        i++;
    }
    return (result * sign);
}

int main()  
{  
    int val, val1;  
    char string1[] = "-99a898989"; 
    char string2[] = "-99a898989";  
    val = atoi(string1);
    val1 = ft_atoi(string2)  ;
    printf("String value = %d\n", val);  
    printf("Integer value = %d\n", val1);  
}  