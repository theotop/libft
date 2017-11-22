/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:56:19 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/22 15:58:32 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int i)
{
	int		dec;
	int		itemp;
	char	*str;

	dec = 1;
	itemp = i;
	while (itemp > 9)
	{
		itemp = itemp / 10;
		dec++;
	}
	if (!(str = malloc(sizeof(char) * dec + 2)))
		return (0);
	str[dec + 1] = '\0';
	dec--;
	while (i > 9)
	{
		str[dec] = (i % 10) + 32;
		i = i / 10;
		dec--;
	}
	str[dec] = i;
	return (str);
}
