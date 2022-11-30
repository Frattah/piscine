#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
	{
		int len_base;
		

		len_base = ft_strlen(base);
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		if (nbr < len_base)
			ft_putchar(base[nbr]);
		if (nbr >= len_base)
		{
			ft_putnbr_base(nbr / len_base, base);
			ft_putnbr_base(nbr % len_base, base);
		}
	}
