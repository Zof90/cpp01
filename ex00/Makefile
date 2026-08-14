# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schouite <schouite@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/14 16:02:39 by schouite          #+#    #+#              #
#    Updated: 2026/08/14 17:35:21 by schouite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## Arguments

NAME = zombie
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

## DIR

SRC_DIR = src
OBJ_DIR = obj
INCLUDES = -Iincludes

## FILES

CFILES = $(SRC_DIR)/main.cpp $(SRC_DIR)/Zombie.cpp $(SRC_DIR)/newZombie.cpp $(SRC_DIR)/randomChump.cpp
OFILES = $(CFILES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
HEADER = includes/Zombie.hpp

## Rules

all: $(NAME)
$(NAME): $(OFILES)
	$(CXX) $(CXXFLAGS) $(OFILES) -o $(NAME)
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADER)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@
clean:
	@rm -rf $(OBJ_DIR)
fclean: clean
	@rm -r $(NAME)
re: fclean all
.PHONY: all clean fclean re
