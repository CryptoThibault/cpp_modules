NAME = account
FILES = Account.cpp \
	tests.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME):
	c++ $(FLAGS) -o $@ $(FILES)
all: $(NAME)

clean:
	rm -f $(NAME)
fclean: clean
	rm -f $(NAME)
re: clean all
