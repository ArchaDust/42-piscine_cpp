# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aberneli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/16 14:59:12 by aberneli          #+#    #+#              #
#    Updated: 2022/04/04 09:12:21 by aberneli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := HumanGoesBonk

HEADER := HumanA.hpp HumanB.hpp Weapon.hpp

CCPP := c++
FLAGS := -Wall -Wextra -Werror -std=c++98 -I.

SRC := main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CCPP) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp  $(HEADER)
	$(CCPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

rebonus: fclean

.PHONY: all clean fclean re
