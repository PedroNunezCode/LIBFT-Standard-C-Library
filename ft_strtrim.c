/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 16:43:18 by pnunez            #+#    #+#             */
/*   Updated: 2018/01/02 16:43:27 by pnunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char				*new;
	int					start;
	unsigned int		i;

	if (!s)
		return (NULL);
	i = 0;
	while ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
		i++;
	start = i;
	if (s[start] == '\0')
	{
		new = ft_strnew(0);
		new[0] = '\0';
		return (new);
	}
	while (s[i])
		i++;
	i--;
	while ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
		i--;
	if (!(new = (ft_strsub(s, start, i - start + 1))))
		return (NULL);
	return (new);
}
