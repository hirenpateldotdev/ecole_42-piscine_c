/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 23:32:47 by hirenpat          #+#    #+#             */
/*   Updated: 2018/09/30 23:40:03 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_putchar(char c);
void	ft_putstr(char *str);

char	**grid_parse(int argc, char **argv)
{
	char	**grid;
	int		row_x;
	int		col_y;

	row_x = 1;
	grid = malloc(sizeof(char *) * 9);
	while (row_x < argc)
	{
		grid[row_x - 1] = malloc(sizeof(char) * 9);
		col_y = 0;
		while (col_y < 9)
		{
			if (argv[row_x][col_y] == '.')
				grid[row_x - 1][col_y] = 0;
			else
				grid[row_x - 1][col_y] = argv[row_x][col_y] - '0';
			col_y++;
		}
		row_x++;
	}
	return (grid);
}

void	grid_print(char **grid)
{
	int		row_x;
	int		col_y;

	col_y = 0;
	while (col_y < 9)
	{
		row_x = 0;
		while ( row_x < 9)
		{
			ft_putchar(grid[col_y][row_x] + '0');
			row_x++;
			if (row_x % 9 != 0)
				ft_putchar(' ');
		}
		col_y++;
		ft_putchar('\n');
	}
}

int		check_grid(char **grid, int num, int row, int col)
{
	int		row_x;
	int		col_y;
	int		pos_row_x;
	int		pos_col_y;

	pos_row_x = 0;
	pos_col_y = 0;
	row_x = 0;
	col_y = 0;
	while (row_x < 9)
	{
		if (grid[row][row_x] == num)
			return (0);
		row_x++;
	}
	while (col_y < 9)
	{
		if (grid[col_y][col] == num)
			return (0);
		col_y++;
	}
	row_x = (row / 3) * 3;
	col_y = (col / 3) * 3;
	while (pos_row_x < 3)
	{
		while (pos_col_y < 3)
		{
			if (grid[row_x + pos_row_x][col_y + pos_col_y] == num)
					return (0);
			pos_col_y++;
		}
		pos_row_x++;
	}
	return (1);
}
