/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 13:43:53 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/12/04 20:24:26 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	size_t t;

	if (s1 == NULL || s2 == NULL)
		return (0);
	t = 0;
	while (s1[t] == s2[t] && s1[t] && s2[t])
		t++;
	if (s1[t] == 0 && s2[t] == 0)
		return (1);
	return (0);
}
