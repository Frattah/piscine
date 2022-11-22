void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_temp
	int	b_temp

	a_temp = *a;
	b_temp = *b;
	*a = a_temp / b_temp;
	*b = a_temp % b_temp;
}
