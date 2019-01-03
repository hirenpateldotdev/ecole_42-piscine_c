/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:37:41 by hirenpat          #+#    #+#             */
/*   Updated: 2018/10/03 21:27:11 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *l;

	l = (t_list*)malloc(sizeof(t_list));
	(*l).data = data;
	(*l).next = NULL;
	return (l);
}
