int	ft_str_is_printable(char *str)
{
	int is_pr;

	is_pr = str[0] >= 32 && str[0] <= 126;
	if (str[0] == '\0')
	{
		return (1);
	}
	return (is_pr && ft_str_is_printable(str + 1));
}
