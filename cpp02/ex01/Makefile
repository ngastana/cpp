NAME = Towards_a_more_useful_fixed_point_number_class

SRC = main.cpp \
		Fixed.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98 -pedantic -g3 -fsanitize=address

all : $(NAME)


CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m

define	ART
$(CYAN)                                                        

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

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)
	@echo "$$ART"

clean:
	rm -rfv $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re