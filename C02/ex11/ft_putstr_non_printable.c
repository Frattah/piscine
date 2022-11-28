#include <stdio.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	traslation(char *str, int start)
{
	int i;
	int j;

	j = 0;
	while (j < 2)
	{	
		i = ft_strlen(str) + 1;
		while (i > start)
		{
			str[i] = str[i-1];
			i--;
		}
		j++;
	}
}

char	*exadecimal(char *str, int i)
{
	str[0] = '\\';
	if (i % 16 >= 10)
		str[2] = i % 16 - 10 + 'a';
	else
		str[2] = i % 16 + '0';
	if (i / 16 % 16 >= 10)
		str[1] = i / 16 % 16 - 10 + 'a';
       	else
		str[1] = i / 16 % 16 + '0';	
	return (str);
}

void	ft_strcpy_ex(char *s1, char *s2, int start)
{
	int i;

	i = 0;
	while (i < 3)
	{
		s1[start + i] = s2[i];
		i++;
	}

}

void	ft_put_non_printable(char *str)
{
	int i;
	char ex[3];

	i = 0;
	while (str[i])
	{
		if (str[i] <= 32 || str[i] > 126)
		{
			traslation(str,i);
			ft_strcpy_ex(str,exadecimal(ex,str[i]),i);
		}
		i++;
	}	
}

#include <string.h>

int main()
{
	char str[50];
	fgets(str,50,stdin);
	str[strlen(str)-1] = '\0';
	ft_put_non_printable(str);
	puts(str);
}
