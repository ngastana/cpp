NAME = Unnecessary_violence

SRC = src/HumanA.cpp \
		src/HumanB.cpp \
		src/main.cpp \
		src/Weapon.cpp

OBJ = $(SRC:.cpp=.o)

CXX = c++ -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CXX) -c $< -o $@

clean:
	rm -rf $(NAME) 

fclean: clean

re: fclean all

.PHONY: all clean fclean re