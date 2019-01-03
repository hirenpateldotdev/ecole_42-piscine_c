/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 01:36:25 by hirenpat          #+#    #+#             */
/*   Updated: 2018/09/20 18:03:40 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int nb)
{
	int rev;

	while (nb > 0)
	{
		rev = rev * 10 + nb % 10;
		nb = nb / 10;
	}
	while (rev > 0)
	{
		ft_putchar((rev % 10) + 48);
		rev /= 10;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb == 2147483647)
	{
		ft_putchar('2');
		nb = 147483647;
	}
	if (nb == 0)
		ft_putchar('0');
	print(nb);
}
