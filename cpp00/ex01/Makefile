NAME = phonebook
FILES = main.cpp \
	PhoneBook.cpp \
	Contact.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME):
	c++ $(FLAGS) -o $@ $(FILES)
all: $(NAME)

clean:
	rm -f $(NAME)
fclean:
	rm -f $(NAME)
re: clean all
