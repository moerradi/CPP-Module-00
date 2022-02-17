# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moerradi <marvin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 08:10:36 by moerradi          #+#    #+#              #
#    Updated: 2022/02/16 08:20:40 by moerradi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=megaphone
FLAGS=-Wall -Wextra -Werror
SRCS=megaphone.cpp

all: $(NAME)

$(NAME): $(SRCS)
	g++ $(FLAGS) $(SRCS) -o $(NAME) 

clean:
	rm -rf *.o
	
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re