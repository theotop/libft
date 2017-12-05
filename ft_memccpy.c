/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:31:15 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/12/04 18:52:16 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			t;
	unsigned char	*source;
	unsigned char	*dest;

	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	t = 0;
	while (t < n)
	{
		if ((unsigned char)c == source[t])
		{
			dest[t] = source[t];
			t++;
			return (&dest[t]);
		}
		dest[t] = source[t];
		t++;
	}
	return (NULL);
}
