NAME=phonebook
FLAGS=-Wall -Wextra -Werror -std=c++98
SRCS=main.cpp phonebook.cpp Contact.cpp

all: $(NAME)

$(NAME): $(SRCS)
	g++ $(FLAGS) $(SRCS) -o $(NAME) 

clean:
	rm -rf *.o
	
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re