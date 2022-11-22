int	ft_str_is_alpha(char *str)
{
	int	is_low;
	int	is_upp

	if (str[0]=='\0')
	{
		return (1);
	}
	is_low = str[0] >= 'a' && str[0] <= 'z';
	is_upp = str[0] >= 'A' && str[0] <= 'Z';
	is_str = str[0] >= 129 && str[0] <= ''
	return ((is_low || is_upp) & & ft_str_is_alpha(str+1));
}
