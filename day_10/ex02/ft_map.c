/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 21:39:02 by hirenpat          #+#    #+#             */
/*   Updated: 2018/10/02 21:57:07 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int *tmp;
	int index;

	index = 0;
	tmp = (int*)malloc(sizeof(int) * lenght);
	while (index < lenght)
	{
		tmp[index] = f(tab[index]);
		index++;
	}
	return (tmp);
}
