/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:44:31 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/13 16:49:15 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *haystack, const *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (needle[j] = 0)
		return (haystack);
	while (haystack[i])
	{
		while (needle[j] == haystack[i] && needle[j] && haystack[i] j < len)
		{
			j++;
			i++;
		}
		if (needle[j] && j != len)
			j = 0;
		else
			return (haystack[i - j]);
		i++;
	}
	return (NULL);
}
// un léger doute sur l'éventuelle nécessité de revenir 
// en arriere apres l'echec d'une occurence 
