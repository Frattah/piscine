int	ft_strlen(char *str)
{
	char *temp_str;

	temp_str = str;
	while (*temp_str++){}
	return (temp_str - str);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (size-- && dest[i])
	{
		i++;
	}
	if (size == 0)
		return (i + ft_strlen(src));
	while (src[j])
	{
		if (size > 1) 
		{
			dest[i + j] = src[j];
			size--;
		}
		j++;
	}
	dest[i + j] = '\0';
	return (i + j);
}
