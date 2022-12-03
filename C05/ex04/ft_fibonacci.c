float	power(float a, int b)
{
	if (b == 0)
		return (1);
	return (a * power(a, b - 1));
}

int	ft_fibonacci(int index)
{
	float	rad;
	float	fib;
	
	if (index <= 0)
		return (0);
	rad = 2.236067977;
	fib = (power((1 + rad) / 2, index) 
		- power((1 - rad) / 2, index)) / rad;
       	return ((int)fib);
}
