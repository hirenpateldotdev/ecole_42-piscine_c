/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 14:35:56 by hirenpat          #+#    #+#             */
/*   Updated: 2018/09/28 14:36:05 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base != 1)
	{
		if ((base % 2) == 0)
			return (1 + ft_collatz_conjecture(base / 2));
		if ((base % 2) != 0)
			return (1 + ft_collatz_conjecture(3 * base + 1));
	}
	return (0);
}
