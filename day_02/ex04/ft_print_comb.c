/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 00:16:25 by hirenpat          #+#    #+#             */
/*   Updated: 2018/09/20 00:24:51 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int a, int b, int c)
{
	if ((a < b && b < c) && (a != b && b != c))
	{
		if (a != '0' || b != '1' || c != '2')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0' - 1;
	while (++a <= '9')
	{
		b = a;
		while (++b <= '9')
		{
			c = b;
			while (++c <= '9')
			{
				ft_print(a, b, c);
			}
		}
	}
}
