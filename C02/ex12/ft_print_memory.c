#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

void *ft_print_memory(void *addr, unsigned int size)
{
	int i = 0;
	while(i<size)
	{
		printf("%p\n",addr+i);
		i++;
	}
}


int main(void)
{
	int size;
	void *addr = malloc(1);
	scanf("%d",&size);
	ft_print_memory(addr,size);
}
