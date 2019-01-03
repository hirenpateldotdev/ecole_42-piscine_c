/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 15:12:53 by hirenpat          #+#    #+#             */
/*   Updated: 2018/10/10 15:12:55 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	get_info(int fd)
{
	char	first_line[17];
	char	c;
	int		i;

	i = 0;
	first_line[16] = '\0';
	while (read(fd, &c, 1))
	{
		if (c == '\n')
			break ;
		first_line[i] = c;
		i++;
	}
	first_line[i] = '\0';
	g_height = ft_atoi(first_line);
	g_width = 10;
	g_empty = first_line[ft_digits(g_height)];
	g_obstacle = first_line[ft_digits(g_height) + 1];
	g_full = first_line[ft_digits(g_height) + 2];
}
