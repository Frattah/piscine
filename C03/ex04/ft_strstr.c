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

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int to_find_len;

	to_find_len = ft_strlen(to_find);
	while (*str)
	{
		if (!strncmp(str,to_find,to_find_len))
				{
					return (str);
				}
		str++;
	}
	return (0);
}
