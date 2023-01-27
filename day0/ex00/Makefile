# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aberneli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/16 14:59:12 by aberneli          #+#    #+#              #
#    Updated: 2022/03/31 01:15:20 by aberneli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone

CCPP := c++
FLAGS := -Wall -Wextra -Werror -std=c++98 -I.

SRC := megaphone.cpp
OBJ := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CCPP) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CCPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

rebonus: fclean

.PHONY: all clean fclean re
