int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
        int i;

        i = 0;
        while (i < n)
        {
                if (s1[i] < s2[i])
                {
                        return (s1[i] - s2[i]);
                }
                if (s1[i] > s2[i])
                {
                        return (s1[i] - s2[i]);
                }
                i++;
        }
        return (0);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *fin)
{
	int i;
	int fin_len;
	int str_len;

	i = 0;
	str_len = ft_strlen(str);
	fin_len = ft_strlen(fin);
	while (*str)
	{
		if (fin_len < str_len - i && !ft_strncmp(str,fin,fin_len))
				{
					return (str);
				}
		i++;
		str++;
	}
	return (0);
}
