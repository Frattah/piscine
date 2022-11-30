char	*skip_space(char *str)
{
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	return (str);
}

char	*skip_sign(char *str, int *sign)
{
	*sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*sign *= -1;
		str++;
	}
	return (str);
}

int	is_in(char *str, char c)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}
#include <stdio.h>

int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	sign;
	int	len_base;
	char	*digit;

	len_base = ft_strlen(base);
	nb = 0;
	digit = skip_sign(skip_space(str), &sign);
	while (is_in(base, *digit) != -1)
		nb = (nb * len_base) + is_in(base, *digit++);
	return (sign * nb);
}
