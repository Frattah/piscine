#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"

#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
//#include "ex07/ft_find_next_prime.c"
#include <stdio.h>
#include <limits.h>

int main()
{
	int x;
	scanf("%d", &x);
//	printf("iter_fact = %d\n", ft_iterative_factorial(4));
//	printf("rec_fact  = %d\n", ft_recursive_factorial(4));
//	printf("iter_pow  = %d\n", ft_iterative_power(4,5));
//	printf("rec_pow   = %d\n", ft_recursive_power(4,5));
//	printf("fibonacci = %d\n", ft_fibonacci(29));
	printf("is_prime  = %d\n", ft_is_prime(x));
//	printf("next_prime = %d\n", ft_find_next_prime(x));
}
