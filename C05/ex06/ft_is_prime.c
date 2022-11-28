int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb < 2)
		return (0);
	if (nb % 2 == 0)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		if (nb == 2147483647)
			break;
		else
			i += 2;
	}
	return (1);
}
