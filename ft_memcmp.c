/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 19:06:19 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/12/04 19:17:32 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str;
	const unsigned char	*str2;

	str = s1;
	str2 = s2;
	while (n > 0)
	{
		if (*str != *str2)
			return ((int)(*str - *str2));
		str++;
		str2++;
		n--;
	}
	return (0);
}
