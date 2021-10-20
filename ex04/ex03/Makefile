# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajeanett <ajeanett@42.ru>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/09 15:15:25 by ajeanett          #+#    #+#              #
#    Updated: 2021/04/06 21:19:40 by ajeanett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Materia
SRCS =	AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp fire.cpp
	
OBJECTS = $(SRCS:.cpp=.o)
CXX = clang++
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(FLAGS) $(OBJECTS) -o $(NAME)

%.o: %.cpp %.hpp
	@$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re %.o test
