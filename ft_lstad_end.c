/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstad_end.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 15:20:53 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/12/20 16:05:44 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstad_end(t_list **alst, t_list *new)
{
	t_list	*ptr;

	ptr = *alst;
	if (new)
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
		new->next = NULL;
	}
}
