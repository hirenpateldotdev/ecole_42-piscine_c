/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:33:30 by hirenpat          #+#    #+#             */
/*   Updated: 2018/10/07 22:11:57 by sichong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		f2(int x, char *rush_line)
{
	int x1;

	x = x - 1;
	x1 = x;
	while (x1 > 0)
	{
		if (x1 == x)
		{
			if (rush_line[x1] != 'A')
				return (0);
		}
		else if (x1 == 0)
		{
			if (rush_line[x1] != 'A')
				return (0);
		}
		else
		{
			if (rush_line[x1] != 'B')
				return (0);
		}
		x1--;
	}
	return (1);
}

int		l2(int x, char *rush_line)
{
	int x1;

	x = x - 1;
	x1 = x;
	while (x1 > 0)
	{
		if (x1 == x)
		{
			if (rush_line[x1] != 'C')
				return (0);
		}
		else if (x1 == 0)
		{
			if (rush_line[x1] != 'C')
				return (0);
		}
		else
		{
			if (rush_line[x1] != 'B')
				return (0);
		}
		x1--;
	}
	return (1);
}

int		m2(int x, char *rush_line)
{
	int x1;

	x = x - 1;
	x1 = x;
	while (x1 > 0)
	{
		if (x1 == x)
		{
			if (rush_line[x1] != 'B')
				return (0);
		}
		else if (x1 == 0)
		{
			if (rush_line[x1] != 'B')
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

int		rush02(int x, int y, char **input)
{
	int i;

	i = 0;
	while (input[i] != NULL)
	{
		if (i == 0)
		{
			if (f2(x, input[i]) == 0)
				return (0);
		}
		else if (i == (y - 1))
		{
			if (l2(x, input[i]) == 0)
				return (0);
		}
		else
		{
			if (m2(x, input[i]) == 0)
				return (0);
		}
		i++;
	}
	return (1);
}
