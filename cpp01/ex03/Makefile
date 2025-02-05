NAME = Unnecessary_violence

SRC = src/*.cpp

CXX = c++ -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME): $(SRC)
	@$(CXX) $(SRC) -o $(NAME)

clean:
	rm -rfv $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re