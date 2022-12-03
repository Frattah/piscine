/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:58:22 by frmonfre          #+#    #+#             */
/*   Updated: 2022/12/03 15:59:23 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power >= 0)
	{
		if (power == 0)
			return (1);
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (0);
}
