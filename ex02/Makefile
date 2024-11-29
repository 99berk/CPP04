CC = c++
NAME = Animal
CXXFLAG = -Wall -Wextra -Werror -std=c++98

SRC = 	main.cpp\
		Animal.cpp\
		Brain.cpp\
		Cat.cpp\
		Dog.cpp\
		WrongCat.cpp\
		WrongAnimal.cpp

OBJ = $(SRC:.cpp=.o)

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CXXFLAG) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re