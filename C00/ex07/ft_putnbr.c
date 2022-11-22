/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 08:42:58 by frmonfre          #+#    #+#             */
/*   Updated: 2022/11/21 09:40:36 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	cifre(int nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	my_pow(int a, int b)
{
	if (b == 0)
	{
		return (1);
	}
	return (a * my_pow(a, b-1));
}

void	ft_putnbr(int nb)
{
	int	digit;
	char	nb_string[1];	

	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	digit = cifre(nb);
	while (digit > 0)
	{
		nb_string[0] = nb / my_pow(10, digit - 1) + '0';
		write(1, nb_string, 1);
		nb -= (nb / my_pow(10, digit - 1)) * my_pow(10, digit - 1);
		digit--;
	}
}
