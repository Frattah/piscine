int	ft_str_is_uppercase(char *str)
{
	int	is_up;

	is_up = str[0] >= 'A' && str[0] <= 'Z';
	if (str[0]=='\0')
		return (1);
	return (is_up && ft_str_is_uppercase(str + 1));
}
