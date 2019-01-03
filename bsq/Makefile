# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tyamada- <tyamada-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/08 18:21:50 by hirenpat          #+#    #+#              #
#    Updated: 2018/10/10 12:39:01 by tyamada-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = *.c
OBJ = *.o
FLAGS = -Wall -Wextra -Werror
INCLUDE = includes/

all: $(NAME)
		@gcc $(FLAGS) -I$(INCLUDE) -o $(NAME) $(OBJ)
$(NAME):
		@gcc $(FLAGS) -I$(INCLUDE) -c $(SRC)
clean:
		@rm -rf $(OBJ)
fclean: clean
		@rm -rf $(NAME)
re: fclean all
