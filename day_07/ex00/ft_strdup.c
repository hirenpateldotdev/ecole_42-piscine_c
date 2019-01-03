/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 00:25:33 by hirenpat          #+#    #+#             */
/*   Updated: 2018/09/27 17:38:16 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strndup(const char *s, size_t n)
{
	unsigned int	i;
	char			*str;

	i = -1;
	str = malloc(sizeof(char) * (n + 1));
	if (str == '\0')
		return ('\0');
	while (++i < n)
		str[i] = str[i];
	str[i] = '\0';
	return (str);
}
