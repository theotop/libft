/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntwds.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:14:48 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/12/04 21:36:52 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_cntwds(char const *s, char sep)
{
	size_t	t;
	size_t	count;
	size_t	in_word;

	t = 0;
	in_word = 0;
	count = 0;
	while (s[t])
	{
		if (!in_word && s[t] != sep)
		{
			in_word = 1;
			count++;
		}
		if (in_word && s[t] == sep)
			in_word = 0;
		t++;
	}
	return (count);
}
