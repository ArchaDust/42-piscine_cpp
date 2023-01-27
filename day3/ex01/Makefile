# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aberneli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 09:00:43 by aberneli          #+#    #+#              #
#    Updated: 2022/04/07 16:42:29 by aberneli         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC := main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = ClapTrap.hpp ScavTrap.hpp

NAME = ex01

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	g++ $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp $(HEADER)
	g++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

rebonus: fclean

.PHONY: all clean fclean re
