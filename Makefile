NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
AR = ar
ARFLAGS = rcs

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@