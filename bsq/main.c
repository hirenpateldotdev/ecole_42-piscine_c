/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamada- <tyamada-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 16:41:49 by hirenpat          #+#    #+#             */
/*   Updated: 2018/10/10 15:16:54 by tyamada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	bsq(int fd)
{
	int	i;

	i = 0;
	get_info(fd);
	g_grid = make_grid(fd);
	g_ogintgrid = make_intgrid();
	g_intgrid = make_intgrid();
	while (i < g_width)
	{
		solve_grid();
		i++;
	}
}

int		main(int ac, char **av)
{
	int fd;

	if (ac == 1)
		return (0);
	fd = open(av[1], O_RDONLY);
	if (fd == (-1))
		ft_putstr("invalid map");
	bsq(fd);
	close(fd);
	return (0);
}
