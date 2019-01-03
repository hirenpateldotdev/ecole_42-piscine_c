/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 21:41:52 by hirenpat          #+#    #+#             */
/*   Updated: 2018/10/02 21:57:41 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char))
{
	int index;
	int x;

	index = 0;
	x = 0;
	while (tab[index])
	{
		if (f(tab[index]) == 1)
			x++;
		index++;
	}
	return (x);
}
