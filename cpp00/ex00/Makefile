NAME = megaphone

SRC = megaphone.cpp

CC = c++ -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME): $(SRC)
	@$(CC) $(SRC) -o $(NAME)

clean:
	rm -rfv $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re