/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 14:42:17 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/22 16:05:32 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	t;
	char	*str;

	t = 0;
	if (!(str = ft_strnew(len)))
		return (NULL);
	while (t < len)
		str[t++] = s[start++];
	str[t] = '\0';
	return (str);
}
