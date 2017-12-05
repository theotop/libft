/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:58:16 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/12/04 20:15:21 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t t;

	t = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[t] && s != NULL)
	{
		f(t, &s[t]);
		t++;
	}
}
