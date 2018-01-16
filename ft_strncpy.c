/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 16:40:36 by pnunez            #+#    #+#             */
/*   Updated: 2018/01/02 16:40:40 by pnunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t	i;
	char	*ptr;
	char	*ptr2;

	i = 0;
	ptr = dest;
	ptr2 = (char *)src;
	if (ft_strlen(ptr2) < len)
	{
		while (i++ < ft_strlen(ptr2))
			*dest++ = *src++;
		while (i++ <= len)
			*dest++ = '\0';
	}
	else
	{
		while (i++ < len && src)
			*dest++ = *src++;
	}
	return (ptr);
}
