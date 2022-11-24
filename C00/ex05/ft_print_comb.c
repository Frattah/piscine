/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:13:39 by frmonfre          #+#    #+#             */
/*   Updated: 2022/11/23 10:53:39 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int n)
{
	int		n_perm;
	char	n_str[1];

	n_perm = n;
	if (n < 100)
	{
		write(1, "0", 1);
	}
	else
	{
		n_str[0] = '0' + n / 100;
		n = n - (n_str[0] - '0') * 100;
		write(1, n_str, 1);
	}
	n_str[0] = '0' + n / 10;
	write(1, n_str, 1);
	n_str[0] = '0' + n % 10;
	write(1, n_str, 1);
	if (n_perm != 789)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	dec;

	i = 0;
	while (i < 999)
	{
		dec = i - (i / 100) * 100;
		if (i > 11 && i < 100 && i / 10 < i % 10)
		{
			putnbr(i);
		}
		else if (i > 100 && i / 100 < dec / 10 && dec / 10 < i % 10)
		{
			putnbr(i);
		}
		i++;
	}
}
