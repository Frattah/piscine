#include "ft_strs_to_tab.h"
#include <stdlib.h>
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int		i;
	t_stock_str	*tab;
	unsigned int	len;

	tab = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (0);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		len = tab[i].size;
		tab[i].str = (char *) malloc(sizeof(char) * (len + 1));
		if (tab[i].str == NULL)
			return (0);
		ft_strcpy(tab[i].str, av[i]);
		tab[i].copy = (char *) malloc(sizeof(char) * (len + 1));
		if (tab[i].copy == NULL)
			return (0);
		ft_strcpy(tab[i].copy, av[i]);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}
