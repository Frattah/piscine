/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:59:30 by frmonfre          #+#    #+#             */
/*   Updated: 2022/12/03 16:04:56 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float	power(float a, int b)
{
	if (b == 0)
		return (1);
	return (a * power(a, b - 1));
}

int	ft_fibonacci(int index)
{
	float	rad;
	float	fib;

	if (index <= 0)
		return (0);
	rad = 2.236067977;
	fib = (power((1 + rad) / 2, index) - power((1 - rad) / 2, index)) / rad;
	return ((int)fib);
}
