/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 16:41:46 by pnunez            #+#    #+#             */
/*   Updated: 2018/01/02 16:41:50 by pnunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned long	i;
	int				x;

	x = 0;
	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i])
	{
		x = 0;
		while (big[i] == little[x] && big[i] && i < len)
		{
			i++;
			x++;
		}
		if (!little[x])
			return ((char *)&big[i - x]);
		i = (i - x) + 1;
	}
	return (NULL);
}
