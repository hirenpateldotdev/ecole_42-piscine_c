/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 16:21:01 by hirenpat          #+#    #+#             */
/*   Updated: 2018/10/07 22:28:24 by sichong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <unistd.h>

int		find_width(char *input);
int		find_height(char *input);

int		rush00(int x, int y, char **input);
int		rush01(int x, int y, char **input);
int		rush02(int x, int y, char **input);
int		rush03(int x, int y, char **input);
int		rush04(int x, int y, char **input);
void	print_mess(int height, int width, int rush, int matches);

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);

char	**make_grid(int width, int height, char *input);

int		check(int width, int height, char **grid)
{
	int matches;

	matches = 0;
	if (rush00(width, height, grid))
		print_mess(height, width, 0, matches++);
	if (rush01(width, height, grid))
		print_mess(height, width, 1, matches++);
	if (rush02(width, height, grid))
		print_mess(height, width, 2, matches++);
	if (rush03(width, height, grid))
		print_mess(height, width, 3, matches++);
	if (rush04(width, height, grid))
		print_mess(height, width, 4, matches++);
	write(1, "\n", 1);
	return (1);
}

int		main(void)
{
	int		height;
	int		width;
	char	ch;
	char	input[4097];
	char	**grid;

	height = 0;
	while (read(0, &ch, 1))
	{
		input[height++] = ch;
	}
	height = find_height(input);
	width = find_width(input);
	grid = make_grid(width, height, input);
	check(width, height, grid);
	return (0);
}
