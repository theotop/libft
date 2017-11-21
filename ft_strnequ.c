/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 13:51:21 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/21 16:17:05 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t t;

	t = 0;
	while (s1[t] == s2[t] && s1[t] && s2[t] && t <= n)
		t++;
	if (t <= n)
		return (1);
	return (0);
}
