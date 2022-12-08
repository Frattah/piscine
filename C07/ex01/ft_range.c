#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{

	int		*a;
	unsigned int	len;
	unsigned int	i;

	i = 0;
	if (min >= max)
		return (0);
	len = max - min;
	a = (int *) malloc(sizeof(int*) * len);
	if (a == NULL)
		return (0);
	while(i < len)
	{
		a[i] = i + min;
		i++;
	}
	return (a);
}
