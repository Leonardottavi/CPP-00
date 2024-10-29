# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 13:46:22 by lottavi           #+#    #+#              #
#    Updated: 2024/10/29 15:19:28 by lottavi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variabili
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:%.cpp=build/%.o)
TARGET = build/bin/account_app

# Regole
all: build/bin $(TARGET)

build/bin:
	mkdir -p build/bin

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

build/%.o: %.cpp | build
	$(CXX) $(CXXFLAGS) -c $< -o $@

build:
	mkdir -p build

clean:
	rm -rf build

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
