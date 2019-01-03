/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamada- <tyamada-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 19:05:52 by hirenpat          #+#    #+#             */
/*   Updated: 2018/10/10 15:16:54 by tyamada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# define NULL __DARWIN_NULL
# define BUF_SIZE 4096

int		g_height;
int		g_width;
char	g_empty;
char	g_obstacle;
char	g_full;
char	**g_grid;
int		**g_intgrid;
int		**g_ogintgrid;
char	*g_first_line;

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_atoi(char str[]);
int		ft_digits(int nbr);
int		ft_int_value(char c);
char	**make_grid(int fd);
int		**make_intgrid(void);
char	**convert_into_grid(char *input);
void	get_info(int fd);
void	bsq(int fd);
int		find_min(int i, int j);
void	solve_grid(void);
int		count_col(int y);
int		check_grid(void);
char	*realloc_and_strcat(char *s1, char *s2);
int		ft_strlen(char *str);

#endif
