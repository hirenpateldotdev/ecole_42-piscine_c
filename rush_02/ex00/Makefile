# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marrodri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/07 23:20:35 by marrodri          #+#    #+#              #
#    Updated: 2018/10/07 23:35:18 by marrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRCS = *.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRCS) -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
