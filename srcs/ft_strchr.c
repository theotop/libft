/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:53:53 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/13 15:14:37 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strchr(const char *s, int c)
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
		while (s[i] && s[i] != c)
			i++;
		if (s[i])
			return (s[i]);
		else
			return (NULL);
	}
}
