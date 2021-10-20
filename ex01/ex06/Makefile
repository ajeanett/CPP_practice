# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/27 19:27:49 by ajeanett          #+#    #+#              #
#    Updated: 2021/03/28 15:11:44 by ajeanett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = human
SRCS =	HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
	
OBJECTS = $(SRCS:.cpp=.o)
FLAGS = clang++ -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	clang++ $(OBJECTS) -o $(NAME)

%.o: %.cpp %.hpp
	@$(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re %.o test
