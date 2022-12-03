#include <unistd.h>
#include <stdio.h>

void	copy(int tab_src[][10], int tab_dest[][10])
{
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			tab_dest[i][j] = tab_src[i][j];
			j++;
		}
		i++;
	}
}

void	stampa_tab(int tab[][10])
{
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
			printf("%d  ", tab[i][j]);
		printf("\n");
	}
//	printf("\n\n\n\n\n\n\n");
}

void	stampa_soluzione(int tab[][10])
{
	int	i;
	char	j;

	i = 0;
	while (i < 10)
	{
		j = '0';
		while (j < '9' + 1)
		{
			if (tab[i][j - '0'] == 2)
			{
				write(1, &j, 1);
			}
			j++;
		}
		i++;
	}
	write (1, "\n", 1);
}

int	ft_min(int n1, int n2)
{
	if (n1 > n2)
		return (n2);
	return (n1);
}

void	marca(int tab[][10], int i, int x)
{	
	int	j;
	int	k;

	j = 0;
	while (j < 10)
		tab[i][j++] = 0;
	j = 0;
	while (j < 10)
		tab[j++][x] = 0;
	j = -ft_min(i, x);
	k = j;
	while (j < ft_min(i, x) + ft_min(9 - i, 9 - x) + 1 + k)
		tab[i + j][x + j++] = 0;
	j = i - 9;
	if (i + x < 9)
		j = -i;
	k = j;
	while (j < ft_min(9 - x, i) + ft_min(x, 9 - i) + 1 + k)
	{
		if (i + x >= 9)
			tab[i - j][x + j++] = 0;
		else
			tab[i + j][x - j++] = 0;
	}
}

int	ft_recursive(int tab[][10], int x, int *sol)
{
	int	i;
	int	tab_copy[10][10];

	i = 0;
//	stampa_tab(tab);
	while (i < 10)
	{
//		sleep(1);
		if (tab[i][x])
		{
			copy(tab, tab_copy);
			marca(tab, i, x);
			tab[i][x] = 2;
			if (x == 9)
			{
				(*sol)++;
				stampa_soluzione(tab);
			}
			else
				ft_recursive(tab, x + 1, sol);
			copy(tab_copy, tab);
		}
		i++;
	}
	return *sol;
}

int	ft_ten_queens_puzzle(void)
	{
		int	tab[10][10];
		int	i;
		int	j;
		int	sol;

		sol = 0;
		i = 0;
		j = 0;
		while (i < 10)
		{
			j = 0;
			while (j < 10)
			{
				tab[i][j] = 1;
				j++;
			}
			i++;
		}
		ft_recursive(tab, 0, &sol);
		return (sol);
	}

int	main()
{
	ft_ten_queens_puzzle();
}
