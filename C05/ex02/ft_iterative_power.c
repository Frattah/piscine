int	ft_iterative_power(int nb, int power)
{
	if (power >= 0)
	{
		if (nb == power && nb == 0)
			return (1);
		while (power > 0)
		{
			nb *= nb;
			power--;
		}
		return (nb);
	}
	else
	{
		return (0);
	}
}
