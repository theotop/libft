/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:51:53 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/12/29 19:22:34 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t i;
	size_t j;
	size_t needle_size;

	i = 0;
	needle_size = ft_strlen((char*)to_find);
	if (!(*to_find))
		return ((char *)str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] && to_find[j] && to_find[j] == str[i + j])
			j++;
		if (j == needle_size)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
