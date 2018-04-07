# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: male-gal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/14 16:10:15 by male-gal          #+#    #+#              #
#    Updated: 2018/04/07 16:51:07 by male-gal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = *.c
HEAD = libft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC) -I $(HEAD)
	ar -rc $(NAME) *.o

clean:
	-rm -f *.o	

fclean : clean
	-rm -f $(NAME)

re: fclean all
