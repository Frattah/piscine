#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_join(int size, char **strs, char *sep, char *ret)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			ret[k++] = strs[i][j++];
		j = 0;
		if (i++ < size - 1)
		{
			while (sep[j] != '\0')
				ret[k++] = sep[j++];
		}
	}
	ret[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int	i;
	int	len;
	int	sep_len;

	if (strs == 0 || sep == 0)
		return (0);
	sep_len = ft_strlen(sep);
	len = 1;
	i = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		if (i < size - 1)
			len = len + ft_strlen(sep);
		i++;
	}
	ret = (char *) malloc(sizeof(char) * len);
	ft_join(size, strs, sep, ret);
	return (ret);
}
