NAME=megaphone

CC=clang++

FLAGS= -Wall -Wextra -Werror

SRCS=megaphone.cpp

all: $(NAME)

$(NAME): $(SRCS)
		@$(CC) $(CFLAGS) -o$(NAME)  $(SRCS)

clean:
		@rm -f $(NAME)

fclean:
		#@rm -f $(OBJ)
		@rm -f $(NAME)

re: all
	./$(NAME)
