/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:22:03 by hirenpat          #+#    #+#             */
/*   Updated: 2018/10/07 22:55:44 by sichong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		f0(int x, char *rush_line)
{
	int x1;

	x = x - 1;
	x1 = x;
	while (x1 > 0)
	{
		if (x1 == x)
		{
			if (rush_line[x1] != 'o')
				return (0);
		}
		else if (x1 == 0)
		{
			if (rush_line[x1] != 'o')
				return (0);
		}
		else
		{
			if (rush_line[x1] != '-')
				return (0);
		}
		x1--;
	}
	return (1);
}

int		l0(int x, char *rush_line)
{
	int x1;

	x = x - 1;
	x1 = x;
	while (x1 > 0)
	{
		if (x1 == x)
		{
			if (rush_line[x1] != 'o')
				return (0);
		}
		else if (x1 == 0)
		{
			if (rush_line[x1] != 'o')
				return (0);
		}
		else
		{
			if (rush_line[x1] != '-')
				return (0);
		}
		x1--;
	}
	return (1);
}

int		m0(int x, char *rush_line)
{
	int x1;

	x = x - 1;
	x1 = x;
	while (x1 > 0)
	{
		if (x1 == x)
		{
			if (rush_line[x1] != '|')
				return (0);
		}
		else if (x1 == 0)
		{
			if (rush_line[x1] != '|')
				return (0);
		}
		else
		{
			if (rush_line[x1] != ' ')
				return (0);
		}
		x1--;
	}
	return (1);
}

int		rush00(int x, int y, char **input)
{
	int i;

	i = 0;
	while (input[i] != NULL)
	{
		if (i == 0)
		{
			if (f0(x, input[i]) == 0)
				return (0);
		}
		else if (i == (y - 1))
		{
			if (l0(x, input[i]) == 0)
				return (0);
		}
		else
		{
			if (m0(x, input[i]) == 0)
				return (0);
		}
		i++;
	}
	return (1);
}
