#include <unistd.h>

void	putstr(char *str)
{
	while (*str)
	{
		write(1,str,1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	putstr(*argv);
	write(1,"\n",1);
}
