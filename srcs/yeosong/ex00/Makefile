# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeosong <yeosong@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/28 11:38:11 by yeosong           #+#    #+#              #
#    Updated: 2021/01/28 15:07:17 by yeosong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS =	-Wall -Wextra -Werror

SRC =		Pony.cpp main.cpp

NAME =		house

OBJ =		main.o Pony.o

all:		$(NAME)

$(NAME):	$(OBJ)
	clang++ $(CFLAGS) -o $(NAME) $(OBJ)


%.o:	%.cpp
	clang++ $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean:		clean
	@rm -f $(NAME)

re:			fclean all

command:
	@echo "system(\"leaks house > leaks_result_temp; cat leaks_result_temp | grep leaked && rm -rf leaks_result_temp\");"
	
.PHONY:		all clean fclean re commnad $(NAME)