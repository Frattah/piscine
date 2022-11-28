int     ft_is_prime(int nb)
{
        int     i;

        i = 2;
        if (nb < 2)
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
#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	if (nb % 2 == 0)
		nb++;
	if (nb < 3)
		return (2);
	else
		i = nb;
	while (!ft_is_prime(i) && i < 200)
	{
		printf("%d non e' primo\n", i);
		i++;
		i++;
	}
	return (i);

}
