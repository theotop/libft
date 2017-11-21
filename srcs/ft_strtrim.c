/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:31:49 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/14 19:30:11 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s)
{
	size_t	t;
	size_t	t2;
	size_t	lenght;
	char	*str;

	t = 0;
	while (ft_issep(s[t], " \t\n") && s[t])
		t++;
	if (!(s[t]))
		return (0);
	t2 = t;
	while (s[t])
		t++;
	while (ft_issep(s[t], " \t\n"))
		t--;
	lenght = t - t2;
	t2 = 0;
	if (!(str = ft_strnew(lenght + 1)))
		return (NULL);
	while (t2 < (lenght))
		str[t2++] = s[t++];
	str[t2] = '\0';
	return (str);
}
