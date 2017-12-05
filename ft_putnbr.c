/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:02:44 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/12/05 12:15:09 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nbr)
{
	if (nbr < 0 && nbr >= -9)
		ft_putchar('-');
	if (nbr > 9 || nbr < -9)
		ft_putnbr(nbr / 10);
	if (nbr >= 0)
		ft_putchar('0' + (nbr % 10));
	else
		ft_putchar('0' + ((nbr % 10) * (-1)));
}
