/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:39:24 by hirenpat          #+#    #+#             */
/*   Updated: 2018/10/03 21:28:56 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *elem;

	if (!begin_list)
		return (0);
	elem = begin_list;
	while (elem->next)
		elem = elem->next;
	return (elem);
}
