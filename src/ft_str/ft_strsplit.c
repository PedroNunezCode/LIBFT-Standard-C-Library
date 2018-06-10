/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 16:42:27 by pnunez            #+#    #+#             */
/*   Updated: 2018/01/02 16:42:30 by pnunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_place_words(char const *s, char c, int *newi)
{
	int		i;
	char	*word;
	int		begin;

	i = 0;
	while (s[*newi] == c && s[*newi])
		(*newi)++;
	begin = *newi;
	while (s[*newi] != c && s[*newi])
		(*newi)++;
	if (!(word = ft_strnew(*newi - begin)))
		return (NULL);
	while (begin < *newi)
	{
		word[i] = s[begin];
		i++;
		begin++;
	}
	word[i] = '\0';
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**strings;
	int		i;
	int		count;
	int		k;

	k = 0;
	count = 0;
	i = 0;
	if (!s || !c)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	i = 0;
	strings = (char **)malloc((count + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	while (i < count)
		strings[i++] = ft_place_words(s, c, &k);
	strings[i] = 0;
	return (strings);
}
