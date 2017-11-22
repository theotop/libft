/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:02:54 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/22 16:00:35 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	if (nbr < 0 && nbr >= -9)
		ft_putchar_fd('-', fd);
	if (nbr > 9 || nbr < -9)
		ft_putnbr_fd(nbr / 10, fd);
	if (nbr >= 0)
		ft_putchar_fd('0' + (nbr % 10), fd);
	else
		ft_putchar_fd('0' + ((nbr % 10) * (-1)), fd);
}
