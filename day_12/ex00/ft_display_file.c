/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:27:34 by hirenpat          #+#    #+#             */
/*   Updated: 2018/10/04 22:56:26 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <errno.h>
#include <fcntl.h>

int		main(int ac, char **av)
{
	int		f;
	long	rs;
	char	buff[4096];

	if (ac < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	if ((f = open(av[1], O_RDONLY)) == -1)
	{
		return (1);
	}
	while (((rs = read(f, buff, 4096))) != 0 && rs != -1)
	{
		write(1, buff, (unsigned)rs);
	}
	close(f);
	return (rs == 0);
	av++;
	ac = (ac + 1) - 1;
}
