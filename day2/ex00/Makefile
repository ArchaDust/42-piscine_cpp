# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aberneli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 09:00:43 by aberneli          #+#    #+#              #
#    Updated: 2022/03/28 09:05:45 by aberneli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC := main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = Fixed.hpp

NAME = ex00

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