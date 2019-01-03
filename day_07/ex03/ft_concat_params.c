/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 00:55:54 by hirenpat          #+#    #+#             */
/*   Updated: 2018/09/27 19:24:27 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		x;

	x = -1;
	while (argc > ++x)
	{
		j = -1;
		while (argv[j])
			j++;
	}
	str = (char*)malloc(sizeof(*str) * (x + 1));
	i = -1;
	while (++i < argc - 1)
	{
		str = ft_strcat(str, argv[i + 1]);
		if (i != argc - 2)
			str = ft_strcat(str, "\n");
	}
	return (str);
}
