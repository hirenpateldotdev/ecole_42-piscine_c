# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hirenpat <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/07 14:21:26 by hirenpat          #+#    #+#              #
#    Updated: 2018/10/07 21:53:48 by hirenpat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	@echo 'set -f; echo $$1 | bc' > eval_expr
	@chmod 777 eval_expr

clean:
	@chmod 777 Makefile

fclean: clean
	@rm -f eval_expr

re: fclean all
