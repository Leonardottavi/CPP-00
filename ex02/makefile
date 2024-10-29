# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 13:46:22 by lottavi           #+#    #+#              #
#    Updated: 2024/10/29 13:56:29 by lottavi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variabili
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Account.cpp test.cpp
OBJS = $(SRCS:%.cpp=build/%.o)
TARGET = account_app

# Regole
all: build $(TARGET)

build:
	mkdir -p build

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

build/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf build

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
