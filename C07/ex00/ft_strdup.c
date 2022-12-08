/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:35:24 by frmonfre          #+#    #+#             */
/*   Updated: 2022/12/08 11:42:19 by frmonfre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*s;
	int		len;

	if (src == 0)
		return (0);
	len = 0;
	while (src[len])
		len++;
	len++;
	s = (char *)malloc(sizeof (char *) * len);
	if (s == NULL)
		return (0);
	len = 0;
	while (src[len])
	{
		s[len] = src[len];
		len++;
	}
	s[len] = '\0';
	return (s);
}
