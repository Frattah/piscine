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

int	ft_atoi(char *str)
{
	int	nb;
	int	sign;
	char	*digit;

	nb = 0;
	digit = skip_sign(skip_space(str), &sign);
	while (*digit >= '0' && *digit <= '9')
		nb = (nb * 10) + *digit++ - '0';
	return (sign * nb);
}
