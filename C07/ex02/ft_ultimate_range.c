/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:37:12 by frmonfre          #+#    #+#             */
/*   Updated: 2022/12/08 11:47:13 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*a;
	int	len;
	int	i;

	i = 0;
	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	a = (int *) malloc(sizeof(int) * len);
	if (a == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = a;
	while (i < len)
	{
		a[i] = i + min;
		i++;
	}
	return (len);
}
