/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:19:20 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/21 22:07:18 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t t;
	unsigned char *str;
	
	t = 0;
	str = (unsigned char *)b;
	while (t < len)
	{
		str[t] = (unsigned char)c;
		t++;
	}
	return (str);
}
