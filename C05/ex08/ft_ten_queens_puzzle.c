#include <unistd.h>

int	copy(int tab_src[][10], int tab_dest[][10], int n1, int n2)
{
	int	i;
	int	j;

	if (n1 == 100)
	{
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
	if (n1 > n2)
		return (n2);
	return (n1);
}

void	stampa_soluzione(int tab[][10])
{
	int 	i;
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

void	marca(int t[][10], int i, int x)
{	
	int	j;
	int	k;

	j = 0;
	while (j < 10)
		t[i][j++] = 0;
	j = 0;
	while (j < 10)
		t[j++][x] = 0;
	j = -copy(t, t, i, x) - 1;
	k = j + 1;
	while (++j < copy(t, t, i, x) + copy(t, t, 9 - i, 9 - x) + 1 + k)
		t[i + j][x + j] = 0;
	j = i - 10;
	if (i + x < 9)
		j = -i - 1;
	k = j + 1;
	while (++j < copy(t, t, 9 - x, i) + copy(t, t, x, 9 - i) + 1 + k)
	{
		if (i + x >= 9)
			t[i - j][x + j] = 0;
		else
			t[i + j][x - j] = 0;
	}
}

int	ft_recursive(int tab[][10], int x, int *sol)
{
	int	i;
	int	tab_copy[10][10];

	i = 0;
	while (i < 10)
	{
		if (tab[i][x])
		{
			copy(tab, tab_copy, 100, 1);
			marca(tab, i, x);
			tab[i][x] = 2;
			if (x == 9)
			{
				(*sol)++;
				stampa_soluzione(tab);
			}
			else
				ft_recursive(tab, x + 1, sol);
			copy(tab_copy, tab, 100, 1);
		}
		i++;
	}
	return (*sol);
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
