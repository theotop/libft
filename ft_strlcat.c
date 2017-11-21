/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:13:26 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/21 18:16:27 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j] && j < (size - ft_strlen(dst) - 1))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (ft_strlen(src) + ft_strlen(dst));
}