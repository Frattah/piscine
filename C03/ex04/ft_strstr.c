int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = -1;
	while (++i < n && s1[i] && s2[i])
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *find)
{
	int	i;
	int	find_l;

	i = 0;
	find_l = ft_strlen(find);
	while (*str)
	{
		if (!ft_strncmp(str, find, find_l))
			return (str);
		str++;
	}
	return (0);
}
