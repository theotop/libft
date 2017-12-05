/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:56:19 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/12/05 01:32:11 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_uitoa(unsigned int i)
{
	int				dec;
	unsigned int	itemp;
	char			*str;

	dec = 1;
	itemp = i;
	while (itemp > 9)
	{
		itemp = itemp / 10;
		dec++;
	}
	if (!(str = malloc(sizeof(char) * (dec + 1))))
		return (NULL);
	str[dec--] = '\0';
	while (i > 9)
	{
		str[dec] = (i % 10) + '0';
		i = i / 10;
		dec--;
	}
	str[0] = i % 10 + '0';
	return (str);
}

char			*ft_itoa(int i)
{
	char	*str;

	if (i >= 0)
		return (ft_uitoa((unsigned int)i));
	if (!(str = malloc(sizeof(char) * (ft_strlen(ft_uitoa(-i) + 2)))))
		return (NULL);
	str[0] = '-';
	ft_strcpy(&str[1], ft_uitoa(-i));
	return (str);
}
