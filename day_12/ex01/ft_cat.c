/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 23:27:38 by hirenpat          #+#    #+#             */
/*   Updated: 2018/10/04 23:29:34 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	print(void)
{
	char	buffer;

	while (read(0, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int	main(int argc, char **argv)
{
	char	buffer;
	int		fd;
	int		i;

	if (argc < 2 || argv[1][0] == '-')
		print();
	i = 0;
	while (++i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd >= 0)
		{
			while (read(fd, &buffer, 1) != 0)
				write(1, &buffer, 1);
		}
		else
		{
			ft_putstr("ft_cat: ");
			ft_putstr(argv[i]);
			ft_putstr(": No such file or directory\n");
		}
		close(fd);
	}
	return (0);
}
