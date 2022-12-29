#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "get_next_line.h"

int main()
{
	char *str;

	str = get_next_line(0);
		while (1)
		{
			if (str == NULL)
				break;
			else if ((strcmp(str, "pb\n") == 0))
				printf("oi!");
			else if ((strcmp(str, "pa\n") == 0))
				printf("oi1!");
			else if ((strcmp(str, "ra\n") == 0))
				printf("oi2!");
			printf("%s", str);
			str = get_next_line(0);
		}
}

