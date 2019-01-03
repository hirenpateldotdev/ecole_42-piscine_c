/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 12:47:12 by hirenpat          #+#    #+#             */
/*   Updated: 2018/09/22 23:40:05 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if ((( nb < 0) && (power == 0)) || (power == 0))
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
