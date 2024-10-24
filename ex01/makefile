# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 16:44:50 by lottavi           #+#    #+#              #
#    Updated: 2024/10/24 16:26:10 by lottavi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
LDFLAGS = -lreadline
SRC = main.cpp phonebook.cpp contact.cpp
BUILD_DIR = build
OBJ_DIR = $(BUILD_DIR)/obj
BIN_DIR = $(BUILD_DIR)/bin
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)
DEPS = phonebook.hpp contact.hpp

all: $(BIN_DIR)/$(NAME)

$(BIN_DIR)/$(NAME): $(OBJ)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $(OBJ) -o $(BIN_DIR)/$(NAME) $(LDFLAGS)
	@echo "$(NAME) made"

$(OBJ_DIR)/%.o: %.cpp $(DEPS)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $<"

clean:
	@rm -rf $(BUILD_DIR)
	@echo "Build directory removed"

fclean: clean

re: fclean all

.PHONY: all clean fclean re
