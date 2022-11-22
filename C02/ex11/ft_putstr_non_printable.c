#include <string.h>
#include <stdlib.h>
#include <stdio.h>


void ft_putstr_non_printable(char *str)
{
	int i = 0;
	int j;
	int val;
	int strlen = 0;
	while(str[i]!='\0')
	{
		i++;
		strlen++;
	}
	i=0;
	while(str[i]!='\0')
	{	
		val = str[i];
		if(val>=0 && val<=31 || val!=127 || val>=-128 && val<=-1)
		{
			str[i] = 92;
			j = strlen+2;		
			while(j>i+1)
			{
				str[j] = str[j-2];
				j--;
			}
			val = val%16;
			if(val>=10)
				str[i+1] = 'a'-10+val;
			else 
				str[i+1] = val+'0';
			val = val%16;
			if(val>=10)
				str[i+2] = 'a'-10+val;
			else 
				str[i+2] = val+'0';
			i = i+1;
		}
		i++;
	}
}


int main(void)
{
	char stringa[100];
	fgets(stringa,100,stdin);
	ft_putstr_non_printable(stringa);
	puts(stringa);
}
