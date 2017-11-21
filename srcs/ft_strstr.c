/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:51:53 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/15 19:01:46 by Theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (needle[j] = 0)
		return (haystack);
	while (haystack[i])
	{
		while (needle[j] == haystack[i] && needle[j] && haystack[i])
		{
			j++;
			i++;
		}
		if (needle[j])
			j = 0;
		else
			return (haystack[i - j]);
		i++;
	}
	return (NULL);
}
// un léger doute sur l'éventuelle nécessité de revenir en arriere apres l'echec d'une occurence 
