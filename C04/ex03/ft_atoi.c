int	ft_pow(int a, int b){
	if (b == 0)
		return (1);
	return (a * ft_pow(a, b - 1));
}

int	skip(char *str, int *meno)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == 9 || str[i] == '\n'
					|| str[i] == '+' || str[i] == '-') {
		if (str[i] == '-')
			meno[0] *= -1;
		i++;
	}
	return (i);
}

int	my_strlen(char *str, int start)
{
	int	i;

	i = 0;
	while (str[i + start] >= '0' && str[i + start] <= '9')
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	meno[1];
	int	nb;
	int	j;
	int	start;
	int	len;

	meno[0] = 1;
	nb = 0;
	j = 1;
	start = skip(str, meno);
	len = my_strlen(str, start);
	while (len - j >= 0)
	{
		nb += (str[start + len - j] - '0') * ft_pow(10, j - 1);
		j++;
	}
	return (meno[0] * nb);
}
