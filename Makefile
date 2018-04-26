# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jochang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/19 01:31:43 by jochang           #+#    #+#              #
#    Updated: 2018/04/26 00:02:14 by jochang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

INC = *.h

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC) -I $(INC)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
