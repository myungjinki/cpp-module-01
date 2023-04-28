# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeosong <yeosong@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/29 17:14:07 by yeosong           #+#    #+#              #
#    Updated: 2021/01/29 21:08:03 by yeosong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= replace
CC 		= clang++
FLAG	= -Wall -Wextra -Werror
SRC 	= replace.cpp
OBJ 	= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

$(OBJ): $(SRC)
	$(CC) $(FLAG) -c $(SRC)
clean:
	rm -f $(OBJ) *.replace

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re