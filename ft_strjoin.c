/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:06:06 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/22 16:03:02 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	len2;
	char	*str;

	len = 0;
	len2 = 0;
	if (!(str = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	while (s1[len])
	{
		str[len] = s1[len];
		len++;
	}
	while (s2[len2])
	{
		str[len] = s2[len2];
		len++;
		len2++;
	}
	str[len] = '\0';
	return (str);
}
