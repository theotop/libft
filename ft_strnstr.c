/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:44:31 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/22 16:04:44 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (to_find[j] == 0)
		return ((char *)str);
	while (str[i])
	{
		while (to_find[j] == str[i] && to_find[j] && j < len)
		{
			j++;
			i++;
		}
		if (to_find[j] && j != len)
			j = 0;
		if (!(to_find[j]) || j == len)
			return ((char *)&str[i - j]);
		i++;
	}
	return (NULL);
}
