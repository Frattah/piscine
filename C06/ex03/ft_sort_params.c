#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i])
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}

void	bubble_sort(int argc, char **argv)
{
	int	i;
	int	j;
	char	*temp;

	j = 1;
	while (j < argc)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	bubbleSort(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		write(1, "\n", 1);
	}
}
