#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*a;
	unsigned int	len;
	unsigned int	i;

	i = 0;
	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	a = (int*) malloc(sizeof(int) * len);
	if (a == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = a;
	while (i < len)
	{
		range[0][i] = i + min;
		i++;
	}
	return (len);
}
