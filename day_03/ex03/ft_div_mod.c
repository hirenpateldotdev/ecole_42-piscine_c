/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 21:23:51 by hirenpat          #+#    #+#             */
/*   Updated: 2018/09/19 21:24:12 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int localdiv;
	int localmod;

	localdiv = a / b;
	localmod = a % b;
	*div = localdiv;
	*mod = localmod;
}
