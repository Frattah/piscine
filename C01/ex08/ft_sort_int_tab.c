void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	changed;
	int	temp;

	changed = 1;
	while (changed)
	{
		changed = 0;
		j = 0;
		while ( j < size - 1)
		{	
			
			if(tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
				changed = 1;
			
			}
			j++;
		}
	}
}
