NAME = SED_IS_FOR_LOSERS

SRC = main.cpp

CC = c++ -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME): $(SRC)
	@$(CC) $(SRC) -o $(NAME)

clean:
	rm -rfv $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
