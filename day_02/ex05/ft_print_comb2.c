/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 01:23:09 by hirenpat          #+#    #+#             */
/*   Updated: 2018/09/20 15:08:32 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_print(int a, int b, int c, int d)
{
	if (((a * 10) + b) >= ((c * 10) + d))
		return (0);
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(' ');
	ft_putchar(c + 48);
	ft_putchar(d + 48);
	if ((a == 9) && (b == 8) && (c == 9) && (d == 9))
		return (0);
	ft_putchar(',');
	ft_putchar(' ');
	return (0);
}

void	run(int a, int b, int c, int d)
{
	while (((a * 10) + b) != 99)
	{
		ft_print(a, b, c, d);
		if (((c * 10) + d) == 99)
		{
			c = 0;
			d = 1;
			b++;
		}
		else
			d++;
		if (d > 9)
		{
			d = 0;
			c++;
		}
		if (b > 9)
		{
			b = 0;
			a++;
		}
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	b = 0;
	c = 0;
	d = 1;
	run(a, b, c, d);
}
