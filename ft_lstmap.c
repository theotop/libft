/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 22:04:43 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/12/20 16:07:23 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	size_t	i;
	t_list	*new_lst;
	t_list	**new_alst;

	i = 0;
	while (lst)
	{
		if (i == 0)
		{
			new_lst = f(ft_lstnew(lst->content, lst->content_size));
			new_alst = &new_lst;
			new_lst->next = NULL;
		}
		else
			ft_lstad_end(new_alst, f(ft_lstnew(lst->content, \
							lst->content_size)));
		i++;
		lst = lst->next;
	}
	return (*new_alst);
}
