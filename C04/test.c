#include <stdio.h>
#include "ex00/ft_strlen.c"
#include "ex01/ft_putstr.c"
#include "ex03/ft_atoi.c"

int main()
{
	char str[50];
	fgets(str,50,stdin);
	printf("%d", ft_atoi(str));
}
