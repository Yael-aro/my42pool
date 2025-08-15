#include<stddef.h>
#include <stdio.h>
#include<stdlib.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(void)
{
	char *res;

	res = ft_convert_base("   ---1f4", "0123456789abcdef", "01");
	printf("Result: %s\n", res); 
	free(res);

	return 0;
}

