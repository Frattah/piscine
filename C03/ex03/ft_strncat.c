char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (j < n && dest[i] && src[i])
		dest[j + i] = src[j++];
	dest[j + i] = '\0';
	return (dest);
}
