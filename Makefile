
NAME = libft.a

FILES = ft_putchar.c ft_putnbr.c ft_putstr.c ft_putnbr_fd.c ft_putstr_fd.c \
	ft_strlen.c ft_putendl.c ft_putendl_fd.c ft_strclr.c ft_memset.c \
	ft_bzero.c ft_memalloc.c ft_toupper.c ft_tolower.c ft_isalpha.c \
	ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_strequ.c ft_itoa.c \
	ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strnew.c ft_strtrim.c ft_strrev.c \

SRC   = srcs/ft_putchar.c srcs/ft_putnbr.c srcs/ft_putstr.c \
	srcs/ft_putnbr_fd.c srcs/ft_putstr_fd.c	srcs/ft_strlen.c \
	srcs/ft_putendl.c srcs/ft_putendl_fd.c srcs/ft_strclr.c srcs/ft_strrev.c \
	srcs/ft_memset.c srcs/ft_bzero.c srcs/ft_memalloc.c srcs/ft_toupper.c \
	srcs/ft_tolower.c srcs/ft_isalpha.c srcs/ft_isdigit.c srcs/ft_itoa.c \
	srcs/ft_isalnum.c srcs/ft_isprint.c srcs/ft_isascii.c srcs/ft_strequ.c \
	srcs/ft_strnequ.c srcs/ft_strsub.c srcs/ft_strjoin.c srcs/ft_strnew.c \
	srcs/ft_strtrim.c

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
