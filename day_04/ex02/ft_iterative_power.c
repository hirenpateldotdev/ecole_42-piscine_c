/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 12:23:37 by hirenpat          #+#    #+#             */
/*   Updated: 2018/09/22 23:39:42 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int total;

	total = 1;
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if ((( nb < 0) && (power == 0)) || (power == 0))
		return (1);
	else
	{
		while (power > 0)
		{
			total *= nb;
			power--;
		}
		return (total);
	}
}
