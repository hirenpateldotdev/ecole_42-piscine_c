/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 21:35:37 by hirenpat          #+#    #+#             */
/*   Updated: 2018/09/20 23:37:58 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int n;
	int negative;
	int i;

	n = 0;
	negative = 0;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') ||
			(str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
		i++;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		n *= 10;
		n += (int)str[i] - '0';
		i++;
	}
	if (negative == 1)
		return (n *= -1);
	else
		return (n);
}
