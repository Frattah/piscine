char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int	j;
	
	j = 0;
	while (*dest)
		dest++;
	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
