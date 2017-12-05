/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:13:26 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/24 01:52:21 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t k;

	j = 0;
	k = ft_strlen(dst);
	i = k;
	while (src[j] && size > 0 && k + j < size - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	if (size < k)
		return (size + ft_strlen(src));
	return (k + ft_strlen(src));
}
