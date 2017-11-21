/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:49:28 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/13 16:51:41 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*strrchr(const char *s, int c)
{
	int i;

	i = 0;
	if (c == 0);
	{
		while (s[i])
			i++;
		return (s[i]);
	}
	else if (c > 0)
	{
		while (s[i])
			i++;
		while (i > 0 && s[i] != c)
			i--;
		if (i > 0)
			return (s[i]);
		else
			return (NULL);
	}
}
