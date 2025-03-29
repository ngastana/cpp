NAME = Poymorphism

SRC = main.cpp \
            Animal.cpp \
			Cat.cpp \
			Dog.cpp \
            WrongAnimal.cpp \
            WrongCat.cpp \

OBJ = $(SRC:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address

CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m

define	ART
$(RED)                                                        

      ___           ___           ___     
     /\  \         /\  \         /\  \    
    /::\  \       /::\  \       /::\  \   
   /:/\:\  \     /:/\:\  \     /:/\:\  \  
  /:/  \:\  \   /::\~\:\  \   /::\~\:\  \ 
 /:/__/ \:\__\ /:/\:\ \:\__\ /:/\:\ \:\__\ 
 \:\  \  \/__/ \/__\:\/:/  / \/__\:\/:/  / 
  \:\  \            \::/  /       \::/  /  
   \:\  \            \/__/         \/__/   
    \:\__\                                
     \/__/                                

 $(CLR_RMV)
endef
export	ART

all : $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)
	@echo "$$ART"

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
