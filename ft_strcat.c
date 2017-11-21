/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:38:43 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/13 15:00:27 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strcat(char *str1, const char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str1[i])
		i++;
	while (str2[j])
		str1[i++] = str2[j++];
	str1[i] = '\0';
	return (str1);
}
