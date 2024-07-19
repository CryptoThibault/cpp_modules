NAME = megaphone
FILES = megaphone.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME):
	g++ $(FLAGS) -o $@ $(FILES)
all: $(NAME)

clean:
	rm -f *.out
fclean: clean
	rm -f $(NAME)
re: fclean all
