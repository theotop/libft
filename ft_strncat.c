/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:50:32 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/22 16:12:48 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (str1[i])
		i++;
	while (str2[j] && j < n)
		str1[i++] = str2[j++];
	str1[i] = '\0';
	return (str1);
}
