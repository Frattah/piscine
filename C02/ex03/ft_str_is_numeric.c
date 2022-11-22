int	ft_str_is_numeric(char *str)
{
	int	is_nb;

	is_nb = str[0] >= '0' && str[0] <= '9';
	if (str[0] == '\0')
	{
		return (1);
	}
	return (is_nb && ft_str_is_numeric(str + 1));
}
