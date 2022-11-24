int cifre(int nb)
{
	int i;

	i = 0;
	while (nb > 0)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

int negative_management(int *nb)
{
	if (*nb < 0)
	{
		if (*nb == -2147483648)
		{
			*nb = -(1 + *nb);
			write(1, "-", 1);
			return (1);
		}
		else
		{
			*nb = -*nb;
		}
		write(1, "-", 1);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	int i;
	int j;
	char nb_string[15];
	int underflow;

	underflow = negative_management(&nb);
	j = 0;
	i = cifre(nb);
	while (0 < i - j) {
		nb_string[i - j - 1] = nb % 10 + '0';
		nb /= 10;
		j++;
	}
	if (underflow)
		nb_string[i-1]++;
	write(1, nb_string, i);
}
