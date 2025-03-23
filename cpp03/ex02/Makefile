NAME = Repetitive_work!

SRC = main.cpp \
		ClapTrap.cpp \
		FragTrap.cpp \

OBJ = $(SRC: .cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME): $(SRC)
	@$(CC) $(SRC) -o $(NAME)

clean:
	rm -rfv $(OBJ) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re