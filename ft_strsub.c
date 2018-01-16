/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 16:42:53 by pnunez            #+#    #+#             */
/*   Updated: 2018/01/02 16:42:56 by pnunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	new = (char *)malloc((len + 1) * sizeof(char));
	if (new && s)
	{
		while (i < len)
		{
			new[i] = s[start];
			i++;
			start++;
		}
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
