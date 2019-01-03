/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 11:02:50 by hirenpat          #+#    #+#             */
/*   Updated: 2018/09/28 13:15:02 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int	th;

	th = hour;
	if (hour > 12)
		th = hour % 12;
	if (hour == 0)
		th = 12;

	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", th, ((th + 1) % 12);
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	else if (hour == 24)
		printf("12.00 A.M. AND 1.00 A.M.\n");
  else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else
		printf("%d.00 P.M. AND %d.00 P.M.\n", th, (th + 1) % 12);
}
