#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *src)
{
	char		*s;
	unsigned int	len;

	len = 0;
	while (src[len])
		len++;
	len++;
	s = (char*)malloc(sizeof(char*) * len);
	if (s == NULL)
		return (NULL);
	len = 0;
	while (src[len])
	{
		s[len] = src[len];
		len++;
	}
	s[len] = '\0';
	return (s);
}
