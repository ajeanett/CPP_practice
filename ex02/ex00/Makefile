# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajeanett <ajeanett@21-school.ru>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/09 15:15:25 by ajeanett          #+#    #+#              #
#    Updated: 2021/03/30 17:04:48 by ajeanett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
SRCS =	main.cpp fixed.class.cpp
	
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
