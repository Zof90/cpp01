# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schouite <schouite@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/18 16:14:50 by schouite          #+#    #+#              #
#    Updated: 2026/08/19 13:39:51 by schouite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## ARGUMENTS

NAME = out
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

## DIR

SRC_DIR = src
OBJ_DIR = obj

## FILES

CFILES = $(SRC_DIR)/main.cpp
OFILES = $(CFILES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

## RULES

all: $(NAME)

$(NAME): $(OFILES)
	$(CXX) $(CXXFLAGS) $(OFILES) -o $(NAME)
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean: 
	rm -rf $(OBJ_DIR)
fclean: clean
	rm -f $(NAME)
re: fclean all 
.PHONY: all clean fclean re 
