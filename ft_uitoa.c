/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 14:18:12 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/12/05 14:27:49 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_uitoa(unsigned int i, int neg)
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
	if (!(str = ft_strnew(dec + 1 + neg)))
		return (NULL);
	dec = neg ? dec : dec - 1;
	while (i > 9)
	{
		str[dec] = (i % 10) + '0';
		i = i / 10;
		dec--;
	}
	str[1] = neg ? (i % 10 + '0') : str[1];
	str[0] = neg ? '-' : (i % 10 + '0');
	return (str);
}
