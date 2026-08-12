# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schouite <schouite@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/11 15:56:54 by schouite          #+#    #+#              #
#    Updated: 2026/08/12 14:30:35 by schouite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## ARGUMENTS

NAME = Account
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

## DIR

INCLUDES = -Iincludes
SRC_DIR = srcs
OBJ_DIR = objs

## FILES

HEADER = includes/Account.hpp
CFILES = $(SRC_DIR)/fileName.cpp
OFILES = $(CFILES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)%.o)

## RULES
all: $(NAME)
$(NAME): $(OFILES) 
	$(CXX) $(CXXFLAGS) $(OFILES) -o $(NAME)

$(OBJ_DIR)/%.o $(HEADER): $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -r $(NAME)

re: fclean all

.PHONY: all clean fclean re
