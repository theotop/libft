/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:44:31 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/21 19:27:32 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (to_find[j] == 0)
		return ((char *)str);
	while (str[i])
	{
		while (to_find[j] == str[i] && to_find[j] && j < len)
		{
			j++;
			i++;
		}
		if (to_find[j] && j != len)
			j = 0;
		if (!(to_find[j]) || j == len)
			return ((char *)&str[i - j]);
		i++;
	}
	return (NULL);
}
// un léger doute sur l'éventuelle nécessité de revenir 
// en arriere apres l'echec d'une occurence 
