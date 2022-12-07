#include <unistd.h>

void	putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	putstr(argv[0]);
	write(1, "\n", 1);
}
