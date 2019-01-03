/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:12:52 by hirenpat          #+#    #+#             */
/*   Updated: 2018/10/02 21:57:28 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int index;
	int	count;

	index = 0;
	count = 0;
	while (tab[index] != 0)
	{
		if (f(tab[index]))
			count++;
		index++;
	}
	return (count);
}
