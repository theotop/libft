/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:52:16 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/21 17:30:37 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *str)
{
	int		i;
	size_t	j;
	int		neg;

	i = 0;
	j = 0;
	neg = 1;
	while (str[j] && str[j] < 32)
		j++;
	if (str[j] == '-' || str[j] == '+')
	{
		if (str[j] == '-')
				neg = -1;
		j++;
	}
	while (str[j] && str[j] >= '0' && str[j] <= '9')
	{
		i = i * 10;
		i = i + (str[j] - 48);
		j++;
	}
	return (i * neg);
}
