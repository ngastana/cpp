NAME = Towards_a_more_useful_fixed_point_number_class

SRC = main.cpp \
		Fixed.cpp

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