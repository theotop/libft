/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:44:31 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/23 23:27:01 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	if (to_find[0] == 0)
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		k = 0;
		while (to_find[j] == str[i + k] && to_find[j] && (i + k) < len)
		{
			j++;
			k++;
		}
		if (!to_find[j])
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
