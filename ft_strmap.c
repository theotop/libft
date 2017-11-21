/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:27:09 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/21 16:24:58 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	size;
	char	*str;
	
	size = 0;
	if (!(str = malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	// petit doute sur la nécessité du + 1.
	while (str[size] && s[size])
	{
		str[size] = f(s[size]);
		size++;
	}
	str[size] = '\0';
	return (str);
}
