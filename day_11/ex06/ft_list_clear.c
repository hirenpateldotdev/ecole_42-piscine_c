/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:22:49 by hirenpat          #+#    #+#             */
/*   Updated: 2018/10/03 21:30:18 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*elem;
	t_list	*temp;

	elem = *begin_list;
	if (!elem)
		return ;
	while (elem)
	{
		temp = elem;
		free(elem);
		elem = temp->next;
	}
	*begin_list = 0;
}
