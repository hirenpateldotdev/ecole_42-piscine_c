/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 12:16:28 by hirenpat          #+#    #+#             */
/*   Updated: 2018/09/22 23:38:59 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 1)
		return (1);
	if (nb <= 0 || nb > 12)
		return (0);
	else
		nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
