/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntwds.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:14:48 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/22 16:10:37 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cntwds(char const *s, char sep)
{
	size_t	t;
	size_t	count;
	int		counted;

	t = 0;
	count = (s[t] == sep || s[t] == '\0') ? 0 : 1;
	counted = count;
	while (s[t])
	{
		while (s[t] && s[t] == sep)
		{
			counted = 0;
			t++;
		}
	}
	while (s[t] && s[t] != sep)
	{
		if (counted == 0)
		{
			count++;
			counted = 1;
		}
		t++;
	}
	return (count);
}
