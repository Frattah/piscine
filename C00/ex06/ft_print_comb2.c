/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comb2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:08:10 by frmonfre          #+#    #+#             */
/*   Updated: 2022/11/21 09:40:58 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int n)
{
	int		n_perm;
	char	n_str[1];

	n_perm = n;
	if (n == 0)
	{
		write(1, "00", 2);
	}
	else
	{
		if (n < 10)
		{
			write(1, "0", 1);
		}
		else
		{
			n_str[0] = '0' + n / 10;
			write(1, n_str, 1);
		}
		n_str[0] = '0' + n % 10;
		write(1, n_str, 1);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 100)
	{
		j = 0;
		while (j < 100)
		{
			if (i < j)
			{
				putnbr(i);
				write(1, " ", 1);
				putnbr(j);
				if (i != 98)
				{
					write(1, ", ", 2);
				}
			}
			j++;
		}
		i++;
	}
}
