/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:37:31 by tlevaufr          #+#    #+#             */
/*   Updated: 2018/02/21 16:46:21 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	t;
	char	*str;

	t = 0;
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (t <= size)
	{
		str[t] = '\0';
		t++;
	}
	return (str);
}
