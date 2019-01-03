/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:33:35 by hirenpat          #+#    #+#             */
/*   Updated: 2018/10/07 19:33:37 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		f3(int x, char *rush_line)
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

int		l3(int x, char *rush_line)
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

int		m3(int x, char *rush_line)
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

int		rush03(int x, int y, char **input)
{
	int i;

	i = 0;
	while (input[i] != NULL)
	{
		if (i == 0)
		{
			if (f3(x, input[i]) == 0)
				return (0);
		}
		else if (i == (y - 1))
		{
			if (l3(x, input[i]) == 0)
				return (0);
		}
		else
		{
			if (m3(x, input[i]) == 0)
				return (0);
		}
		i++;
	}
	return (1);
}
