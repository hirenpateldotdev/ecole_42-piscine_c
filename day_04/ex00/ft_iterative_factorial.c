/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 22:58:24 by hirenpat          #+#    #+#             */
/*   Updated: 2018/09/22 23:32:48 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int total;

	total = 1;
	i = 1;
	if (nb == 1)
		return (1);
	if (nb <= 0 || nb > 12)
		return (0);
	while (nb >= i)
	{
		total*=i;
		i++;
	}
	return (total);
}
