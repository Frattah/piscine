char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int	i;
	int	j;
	
	j = 0;
	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
