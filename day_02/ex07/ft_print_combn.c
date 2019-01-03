/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 14:36:20 by hirenpat          #+#    #+#             */
/*   Updated: 2018/09/20 20:30:36 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int g_n;

void	print(int arr[], int n)
{
	int i;
	int x;

	i = 0;
	x = 1;
	while (i < n - 1)
	{
		if ((arr[i] >= arr[i + 1]))
			x = 0;
		i++;
	}
	if (x == 1)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(arr[i]);
			i++;
		}
		if (arr[0] != '9' + 1 - g_n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	loop(int arr[], int k, int n)
{
	if (k == n - 1)
	{
		arr[k] = '0';
		while (arr[k] < ':')
		{
			print(arr, n);
			arr[k]++;
		}
	}
	else
	{
		arr[k] = '0';
		while (arr[k] < ':')
		{
			loop(arr, k + 1, n);
			arr[k]++;
		}
	}
}

void	ft_print_combn(int n)
{
	int acc[n];

	g_n = n;
	loop(acc, 0, n);
}
