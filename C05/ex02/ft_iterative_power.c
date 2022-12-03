/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:57:56 by frmonfre          #+#    #+#             */
/*   Updated: 2022/12/03 15:58:13 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nb_perm;

	nb_perm = nb;
	if (power >= 0)
	{
		if (nb == 0)
			return (1);
		while (power-- > 1)
		{
			nb *= nb_perm;
		}
		return (nb);
	}
	else
	{
		return (0);
	}
}
