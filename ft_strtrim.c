/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:31:49 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/12/04 23:55:28 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	t;
	size_t	t2;
	size_t	length;
	char	*str;

	t = 0;
	if (!s)
		return (NULL);
	while (ft_issep(s[t], " \t\n") && s[t])
		t++;
	if (!s[t])
		return (ft_strdup(""));
	t2 = t;
	while (s[t + 1])
		t++;
	while (ft_issep(s[t], " \t\n"))
		t--;
	length = t - t2;
	t = 0;
	if (!(str = ft_strsub(s, t2, length + 1)))
		return (NULL);
	return (str);
}
