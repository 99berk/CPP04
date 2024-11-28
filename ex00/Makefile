NAME	:= program

CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98 #-g

CC		:= c++
RM		:= rm -rf

SRC		:= 
OBJ		:= $(SRC:.cpp=.o)

RED		:= \033[31m
GREEN	:= \033[32m
YELLOW	:= \033[33m
BLUE	:= \033[34m
MAGENTA	:= \033[35m
CYAN	:= \033[36m
RESET	:= \033[0m

CC_MSG		:= @printf "$(CYAN)$(CC)$(RESET) $(YELLOW)$(CXXFLAGS)$(RESET) $(MAGENTA)$(OBJ)$(RESET) -o $(GREEN)$(NAME)$(RESET)\n"
SUCCESS_MSG	:= @printf "$(GREEN)$(NAME) has been compiled$(RESET)\n"
CLEAN_MSG 	:= printf "$(RED)Object files removed$(RESET)\n"
FCLEAN_MSG	:= printf "Executable $(RED)$(NAME)$(RESET) removed\n"
all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)
	$(CC_MSG)
	$(SUCCESS_MSG)

clean:
	@if [ -n "$(wildcard *.o)" ]; then \
		$(RM) $(OBJ); \
		$(CLEAN_MSG); \
	fi

fclean: clean
	@if [ -n "$(wildcard $(NAME))" ]; then \
		$(RM) $(NAME); \
		$(FCLEAN_MSG); \
	fi

re: fclean all

.PHONY: all clean fclean re