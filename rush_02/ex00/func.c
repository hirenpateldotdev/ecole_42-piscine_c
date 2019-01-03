/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 18:42:49 by hirenpat          #+#    #+#             */
/*   Updated: 2018/10/07 22:28:52 by sichong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);

int		find_width(char *input)
{
	int i;

	i = 0;
	while (input[i] && input[i] != '\n')
	{
		i++;
	}
	return (i);
}

int		find_height(char *input)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (input[i])
	{
		if (input[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

char	**make_grid(int width, int height, char *input)
{
	char	**grid;
	int		w;
	int		h;
	int		i;

	w = 0;
	h = 0;
	i = -1;
	grid = (char **)malloc(sizeof(char *) * height);
	while (h < height)
		grid[h++] = (char *)malloc((sizeof(char) * width) + 1);
	h = 0;
	while (input[++i])
	{
		if (input[i] == '\n')
		{
			grid[h][w] = '\0';
			h++;
			w = 0;
		}
		else
			grid[h][w++] = input[i];
	}
	grid[h] = NULL;
	return (grid);
}

void	print_mess(int height, int width, int rush, int matches)
{
	if (matches > 0)
		write(1, " || ", 4);
	ft_putstr("[rush-0");
	ft_putchar(rush + '0');
	ft_putstr("] [");
	ft_putnbr(width);
	ft_putstr("] [");
	ft_putnbr(height);
	ft_putstr("]");
}
