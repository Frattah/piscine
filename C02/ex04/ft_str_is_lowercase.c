int	ft_str_is_lowercase(char *str)
{
	int	is_low;

	is_low = str[0] >= 'a' && str[0] <= 'z';
	if (str[0]=='\0')
	{
		return (1);
	}
	return (is_low && ft_str_is_lowercase(str + 1));
}
