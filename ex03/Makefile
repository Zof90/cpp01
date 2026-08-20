# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schouite <schouite@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/17 12:00:35 by schouite          #+#    #+#              #
#    Updated: 2026/08/20 16:57:34 by schouite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## Arguments

NAME = weapon
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

# DIR 

SRC_DIR = src
OBJ_DIR = obj
INCLUDES = -Iincludes

## FILES

CFILES = $(SRC_DIR)/main.cpp $(SRC_DIR)/Weapon.cpp $(SRC_DIR)/HumanA.cpp $(SRC_DIR)/HumanB.cpp
OFILES = $(CFILES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
HEADER = includes/Weapon.hpp includes/HumanA.hpp includes/HumanB.hpp

## RULES

all: $(NAME)
$(NAME): $(OFILES)
	$(CXX) $(CXXFLAGS) $(OFILES) -o $(NAME)
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADER)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@
clean:
	@rm -rf $(OBJ_DIR)
fclean: clean
	@rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re