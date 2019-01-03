/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamada- <tyamada-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 19:31:58 by hirenpat          #+#    #+#             */
/*   Updated: 2018/10/10 15:18:36 by tyamada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	**make_grid(int fd)
{
	char	*s1;
	char	*s2;
	int		ret;

	s1 = (char*)malloc(sizeof(char));
	s1[0] = '\0';
	s2 = (char*)malloc(sizeof(char) * (BUF_SIZE + 1));
	while ((ret = read(fd, s2, BUF_SIZE)))
	{
		s2[ret] = '\0';
		s1 = realloc_and_strcat(s1, s2);
	}
	free(s2);
	close(fd);
	return (convert_into_grid(s1));
}

char	*realloc_and_strcat(char *s1, char *s2)
{
	char	*ret;
	int		i;
	int		j;

	ret = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		ret[j++] = s1[i++];
	free(s1);
	i = 0;
	while (s2[i] != '\0')
		ret[j++] = s2[i++];
	ret[j] = '\0';
	return (ret);
}

int		ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (*str++)
		l++;
	return (l);
}

char	**convert_into_grid(char *input)
{
	char	**grid;
	int		w;
	int		h;
	int		i;

	w = 0;
	h = 0;
	i = -1;
	grid = (char **)malloc(sizeof(char *) * g_height + 1);
	while (++i < g_height)
		grid[i] = (char *)malloc((sizeof(char) * g_width) + 1);
	i = -1;
	while (input[++i])
	{
		if (input[i] == '\n')
		{
			grid[h++][w] = '\0';
			w = 0;
		}
		else
			grid[h][w++] = input[i];
	}
	grid[h] = NULL;
	return (grid);
}

int		**make_intgrid(void)
{
	int		i;
	int		j;
	int		x;
	int		**intgrid;

	i = 0;
	j = 0;
	x = 0;
	intgrid = (int **)malloc(sizeof(int *) * g_height);
	while (i < g_height)
	{
		j = 0;
		intgrid[i] = (int *)malloc(sizeof(int) * g_width);
		while (j < g_width)
		{
			intgrid[i][j] = ft_int_value(g_grid[i][j]);
			j++;
		}
		i++;
	}
	return (intgrid);
}
