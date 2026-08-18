# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schouite <schouite@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/11 15:56:54 by schouite          #+#    #+#              #
#    Updated: 2026/08/18 14:20:00 by schouite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## ARGUMENTS

NAME = zombie
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

## DIR

INCLUDES = -Iincludes
SRC_DIR = src
OBJ_DIR = obj

## FILES

HEADER = includes/Zombie.hpp
CFILES = $(SRC_DIR)/main.cpp $(SRC_DIR)/Zombie.cpp $(SRC_DIR)/zombieHorde.cpp
OFILES = $(CFILES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

## RULES
all: $(NAME)

$(NAME): $(OFILES) 
	$(CXX) $(CXXFLAGS) $(OFILES) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADER)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -r $(NAME)

re: fclean all

.PHONY: all clean fclean re
