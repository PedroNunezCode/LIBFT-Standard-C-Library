/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 15:57:48 by pnunez            #+#    #+#             */
/*   Updated: 2018/01/03 21:14:49 by pnunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *src, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	k;
	size_t			i;

	a = (unsigned char *)d;
	b = (unsigned char *)src;
	k = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		if (b[i] == k)
			return (d + i + 1);
		i++;
	}
	return (NULL);
}
