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

int	cifre(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	int		nb_temp;
	int		i;
	int		digit;
	char	nb_string[10];

	i = 0;
	nb_temp = nb;
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	digit = cifre(nb);
	while (i < digit)
	{
		nb_string[digit - 1 - i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	write(1, nb_string, digit);
	write(1, "\n", 1);
}
