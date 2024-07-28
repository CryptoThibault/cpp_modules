NAME = harlfilter

CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp Harl.cpp
OBJS = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(FLAGS) -o $@ $^
%.o: %.cpp
	$(CPP) $(FLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
