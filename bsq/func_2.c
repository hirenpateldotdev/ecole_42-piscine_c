/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamada- <tyamada-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 09:57:11 by hirenpat          #+#    #+#             */
/*   Updated: 2018/10/10 15:17:48 by tyamada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	solve_grid(void);

int		find_min(int i, int j)
{
	int		var[4];
	int		x;
	int		min;

	x = 0;
	min = g_intgrid[i][j];
	var[0] = g_intgrid[i - 1][j - 1];
	var[1] = g_intgrid[i - 1][j];
	var[2] = g_intgrid[i][j - 1];
	var[3] = g_intgrid[i][j];
	while (x < 4)
	{
		if (var[x] <= min)
			min = var[x];
		x++;
	}
	min = min + g_ogintgrid[i][j];
	return (min);
}

void	solve_grid(void)
{
	int		i;
	int		j;

	i = 1;
	j = 1;
	while (i < g_height)
	{
		j = 1;
		while (j < g_width)
		{
			g_intgrid[i][j] = find_min(i, j);
			j++;
		}
		i++;
	}
}

int		count_col(int i)
{
	int x;

	x = 0;
	while (g_grid[i][x])
		x++;
	return (x);
}

int		check_grid(void)
{
	int		y;

	y = 0;
	while (y < g_height)
	{
		if (count_col(y) != g_width)
			return (-1);
		y++;
	}
	return (1);
}
