int	ft_iterative_factorial(int nb)
{
	int i;
	int result;

	result = 1;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		i = 0;
		while (i < nb - 1)
		{
			result *= nb - i;
			i++;
		}
		return (result);
	}
	if (nb < 0)
		return (0);
}
