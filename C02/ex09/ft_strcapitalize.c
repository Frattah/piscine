char	*ft_strcapitalize(char *str)
{
	int	i;
	int	ini_cha;
	int	is_low;
	int	is_up;

	i = 0;
	while (str[i] != '\0')
	{
		ini_cha = i == 0  || str[i - 1] == ' ' || str[i - 1] == '-';
		is_low = str[i] >= 'a' && str[i] <= 'z';
		is_up = str[i] >= 'A' && str[i] <= 'Z';
		if(ini_cha && is_low)
			str[i] -= 'a'-'A';
		else if (is_up && !ini_cha)
			str[i] += 'a'-'A';
		i++;
	}
	return (str);
}
