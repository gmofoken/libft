
NAME = libft.a

FILES = ft_putchar.c ft_putnbr.c ft_putstr.c ft_putnbr_fd.c ft_putstr_fd.c \
	ft_strlen.c ft_putendl.c ft_putendl_fd.c ft_strclr.c

SRC   = srcs/ft_putchar.c srcs/ft_putnbr.c srcs/ft_putstr.c \
	srcs/ft_putnbr_fd.c srcs/ft_putstr_fd.c	srcs/ft_strlen.c \
	srcs/ft_putendl.c srcs/ft_putendl_fd.c srcs/ft_strclr.c 

INCLUDES = -I includes

SRCO = $(FILES:.c=.o)

all: $(NAME)

$(NAME):
	gcc -c $(CFLAGS) $(SRC) $(INCLUDES)
	ar rc $(NAME) $(SRCO)
	ranlib $(NAME)
	rm $(SRCO)

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all
