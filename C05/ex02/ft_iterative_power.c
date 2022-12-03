int	ft_iterative_power(int nb, int power)
{
	int	nb_perm;

	nb_perm = nb;
	if (power >= 0)
	{
		if (nb == 0)
			return (1);
		while (power-- > 1)
		{
			nb *= nb_perm;
		}
		return (nb);
	}
	else
	{
		return (0);
	}
}
