NAME		=	replace

SRCS		=	main.cpp	\

OBJS		=	$(SRCS:.cpp=.o)

CXX			=	clang++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFALGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME)
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone

.PHONY: all clean fclean re test
