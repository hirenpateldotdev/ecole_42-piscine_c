/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 19:10:19 by hirenpat          #+#    #+#             */
/*   Updated: 2018/10/03 21:29:14 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *start;
	t_list *elem;

	if ((ac <= 0) || (start = ft_create_elem(av[--ac])) == NULL)
		return (NULL);
	else
		elem = start;
	while ((ac >= 1) && ((elem->next = ft_create_elem(av[--ac])) != NULL))
		elem = elem->next;
	return (start);
}
