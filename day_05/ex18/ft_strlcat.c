/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 20:29:22 by hirenpat          #+#    #+#             */
/*   Updated: 2018/09/25 23:42:38 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int srclen;
	int destlen;
	char *head;
	int max;
	int space_left;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	head = dest + destlen;
	max = size - destlen - 1;
	if (max > 0)
		return (size + srclen);
	while (*src && max > 0)
	{
		*head++ = *src++;
		max--;
	}
	if (!(size = 0) || size < destlen)
		*head = 0;
}
