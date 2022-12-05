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
#include <stdlib.h>

int main(int argc, char **argv)
{
//	printf("iter_fact = %d\n", ft_iterative_factorial(x));
//	printf("rec_fact  = %d\n", ft_recursive_factorial(x));
//	printf("iter_pow  = %d\n", ft_iterative_power(atoi(argv[1]),atoi(argv[2])));
//	printf("rec_pow   = %d\n", ft_recursive_power(atoi(argv[1]),atoi(argv[2])));
//	for (int i = 0; i>= 0; i++)
//		printf("%d = %d		", i, ft_fibonacci(i))
//	for (int i = 0; i >= 0; i++)
//		printf("%d = %d		", i, ft_is_prime(i));
	for (int i = 0; i >= 0; i++)
		printf("%d = %d		", i, ft_find_next_prime(i));
}
