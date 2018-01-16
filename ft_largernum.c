/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_larger.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 17:25:40 by pnunez            #+#    #+#             */
/*   Updated: 2018/01/09 15:04:34 by pnunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_largernum(int num1, int num2)
{
	int result;

	if (num1 > num2)
		result = num1;
	else
		result = num2;
	return (result);
}
