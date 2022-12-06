char	*ft_strcat(char *dest, char *src)
{
	int	dest_l;
	int	j;

	dest_l = 0;
	j = 0;
	while (dest[dest_l])
		dest_l++;
	while (src[j])
		dest[dest_l + j] = src[j++];
	dest[dest_l + j] = '\0';
	return (dest);
}
