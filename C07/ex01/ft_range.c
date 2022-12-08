/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:35:33 by frmonfre          #+#    #+#             */
/*   Updated: 2022/12/08 11:44:08 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	len;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	len = max - min;
	a = (int *) malloc(sizeof(int) * len);
	if (a == NULL)
		return (0);
	while (i < len)
	{
		a[i] = i + min;
		i++;
	}
	return (a);
}
