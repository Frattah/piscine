/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_combn.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:34:15 by frmonfre          #+#    #+#             */
/*   Updated: 2022/11/21 09:40:22 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*my_itoa(char *src, int nb, int n)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		src[n - i - 1] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	while (i < n)
	{
		src[0] = '0';
		i++;
	}
	return (src);
}

int	valida(char *str)
{
	int	i;

	i = 0;
	while (str[i + 1] != '\0')
	{
		if (str[i] >= str[i + 1])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	my_pow(int i, int arg)
{
	if (arg == 0)
	{
		return (1);
	}
	return (i * my_pow(i, arg - 1));
}

int	max(int n)
{
	int	i;
	int	sum;

	sum = 0;
	i = 9;
	while (i > 9 - n)
	{
		sum += i * my_pow(10, 10 - i - 1);
		i--;
	}
	return (sum);
}

void	ft_print_combn(int n)
{
	int	i;
	int	mx;
	char	nb_str[11];

	mx = max(n);
	nb_str[n] = '\0';
	i = 1;
	while (i < my_pow(10, n))
	{
		my_itoa(nb_str, i, n);
		if (valida(nb_str))
		{
			write (1, nb_str, n);
			if (i != mx)
			{
				write (1, ", ", 2);
			}
		}
		if (i > mx)
		{
			break ;
		}
		i++;
	}
}

int main(void){
	ft_print_combn(22222);
}
