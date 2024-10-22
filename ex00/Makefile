#                                                     +:+ +:+         +:+      #
#    By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 14:30:59 by lottavi           #+#    #+#              #
#    Updated: 2024/10/22 14:53:15 by lottavi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
BUILD_DIR = build
OBJ_DIR = $(BUILD_DIR)/obj
BIN_DIR = $(BUILD_DIR)/bin

all: $(BIN_DIR)/$(NAME)

$(BIN_DIR)/$(NAME): $(OBJ_DIR)/$(OBJ)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $(OBJ_DIR)/$(OBJ) -o $(BIN_DIR)/$(NAME)
	@echo "$(NAME) made"

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $<"

clean:
	rm -rf $(BUILD_DIR)
	@echo "Build directory removed"

fclean: clean

re: fclean all

.PHONY: all clean fclean re
