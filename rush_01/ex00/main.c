/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 21:16:11 by hirenpat          #+#    #+#             */
/*   Updated: 2018/10/02 21:10:36 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		check_grid(char **grid, int num, int row, int col);
void	grid_print(char **grid);
char	**grid_parse(int argc, char **argv);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		sudoku(char **grid, int row, int col)
{
	int num;

	num = 0;
	if (col >= 9)
	{
		row++;
		col = 0;
	}
	if (row >= 9)
		return (1);
	if (grid[row][col] == 0)
	{
		while (++num <= 9)
		{
			if (check_grid(grid, num, row, col))
			{
				grid[row][col] = num;
				if (sudoku(grid, row, col + 1))
					return (1);
			}
		}
		grid[row][col] = 0;
		return (0);
	}
	return (sudoku(grid, row, col + 1));
}

int		main(int argc, char **argv)
{
	char	**grid;

	grid = grid_parse(argc, argv);
	if(sudoku(grid, 0, 0))
  	grid_print(grid);
	else
    ft_putstr("Error\n");
	return (0);
}
