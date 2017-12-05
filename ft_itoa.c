/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:56:19 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/12/05 17:07:17 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int i)
{
	if (i >= 0)
		return (ft_uitoa((unsigned int)i, 0));
	return (ft_uitoa((unsigned int)-i, 1));
}
