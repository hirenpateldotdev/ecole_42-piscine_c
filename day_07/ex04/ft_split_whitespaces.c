/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 19:50:06 by hirenpat          #+#    #+#             */
/*   Updated: 2018/09/27 22:24:20 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_space(char c)
{
	if (c == '\t' || c == ' ' || c == '\n')
		return (1);
	return (0);
}

int		l(char *str, int i)
{
	int x;

	x = 0;
	while (ft_is_space(str[i]) != 1 && str[i])
	{
		x++;
		i++;
	}
	return (x);
}

int		num_words(char *str)
{
	int i;
	int x;
	int s_true;

	i = 0;
	s_true = 0;
	x = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (ft_is_space(str[i]) == 0 && str[i])
		{
			i++;
			s_true = 1;
		}
		if (ft_is_space(str[i]) == 1 || str[i] == '\0')
		{
			x += (s_true == 1) ? 1 : 0;
			s_true = 0;
			i++;
		}
	}
	return (x);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		z;
	char	**r_str;

	i = 0;
	j = 0;
	r_str = (char **)malloc(sizeof(str) * (num_words(str) + 1));
	while (str[i])
	{
		while ((ft_is_space(str[i]) == 1) && str[i])
			i++;
		if (str[i])
		{
			z = 0;
			if ((r_str[j] = (char *)malloc(sizeof(char) * l(str, i) + 1)) == 0)
				return (0);
			while ((ft_is_space(str[i]) != 1) && str[i])
				r_str[j][z++] = str[i++];
			r_str[j++][z] = '\0';
		}
	}
	r_str[j] = (char *)0;
	return (r_str);
}
