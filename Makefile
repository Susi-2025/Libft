SRCS = ft_isalnum.c ft_isascii.c ft_bzero.c ft_atoi.c \
       ft_calloc.c ft_isalpha.c ft_isdigit.c ft_isprint.c \
       ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
       ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
       ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
       ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
       ft_strampi.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
       ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

OBJS = $(SRCS:.c=.o)
NAME = libft.a
LIBC = ar rcs
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

.c .o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

all: $(NAME)

test: $(NAME)
	$(CC) $(CFLAGS) main.c -L. -lft -o test_run
	./test_run

clean:
	$(RM) $(OBJS) test_run

fclean: clean
	$(RM) $(NAME)

re: fclean all
.PHONY: all clean re
