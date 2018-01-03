# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtopor <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/02 18:30:53 by mtopor            #+#    #+#              #
#    Updated: 2017/12/02 18:30:58 by mtopor           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIB = ./includes/

FLAGS = -Wall -Werror -Wextra

SRCFILES =	*.c
			

OBJECT =	*.o			

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) -I $(LIB) $(SRCFILES)
	ar rc $(NAME) $(OBJECT)

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
