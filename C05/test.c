#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
//#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"
#include <stdio.h>
#include <limits.h>

int main()
{
	int x;
	scanf("%d", &x);
//	printf("iter_fact = %d\n", ft_iterative_factorial(x));
//	printf("rec_fact  = %d\n", ft_recursive_factorial(x));
//	printf("iter_pow  = %d\n", ft_iterative_power(x,7));
//	printf("rec_pow   = %d\n", ft_recursive_power(x,7));
//	printf("fibonacci = %d\n", ft_fibonacci(x));
//	printf("is_prime  = %d\n", ft_is_prime(x));
	printf("next_prime = %d\n", ft_find_next_prime(x));
}
