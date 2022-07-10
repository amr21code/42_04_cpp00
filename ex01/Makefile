# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/09 18:29:03 by anruland          #+#    #+#              #
#    Updated: 2022/07/10 16:33:44 by anruland         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = phonebook
INPUT = 

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(INPUT) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
