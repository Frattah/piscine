char	*ft_strcat(char *dest, char *src)
{
	int dest_len;
	int j;

	dest_len = 0;
	j = 0;
	while(dest[dest_len])
	{
		dest_len++;
	}
	while(src[j])
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest);
}
