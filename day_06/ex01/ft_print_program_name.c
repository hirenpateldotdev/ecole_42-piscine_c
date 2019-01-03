/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 16:01:42 by hirenpat          #+#    #+#             */
/*   Updated: 2018/09/26 16:02:29 by hirenpat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int	i;

	i = -1;
	while (argv[0][++i] != '\0' && argc)
		ft_putchar(argv[0][i]);
	ft_putchar('\n');
	return (0);
}
