/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 14:42:17 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/12/05 00:44:15 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	t;
	char	*str;

	t = 0;
	if (s == NULL)
		return (NULL);
	if (!(str = ft_strnew(len)))
		return (NULL);
	while (t < len)
		str[t++] = s[start++];
	str[t] = '\0';
	return (str);
}
