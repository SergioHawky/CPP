NAME = Sed_is_for_losers
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
INCLUDES = -I inc
SRCS = src/main.cpp src/Replacer.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re