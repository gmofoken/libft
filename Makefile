# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/01 11:21:31 by gmofoken          #+#    #+#              #
#    Updated: 2016/12/01 11:21:37 by gmofoken         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC   = ft_putchar.c ft_putnbr.c ft_putstr.c ft_strdel.c \
		ft_putnbr_fd.c ft_putstr_fd.c ft_strlen.c ft_strncat.c \
		ft_putendl.c ft_putendl_fd.c ft_strclr.c ft_strrev.c \
		ft_memset.c ft_bzero.c ft_memalloc.c ft_toupper.c \
		ft_tolower.c ft_isalpha.c ft_isdigit.c ft_itoa.c \
		ft_isalnum.c ft_isprint.c ft_isascii.c ft_strequ.c \
		ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strnew.c \
		ft_strtrim.c ft_striter.c ft_strcpy.c ft_strncpy.c \
		ft_strchr.c ft_strrchr.c ft_strstr.c ft_strcmp.c \
		ft_strncmp.c ft_strcat.c ft_strdup.c ft_striteri.c \
		ft_strmap.c ft_strmapi.c ft_memdel.c ft_atoi.c \
		ft_strsplit.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		ft_memcmp.c ft_memchr.c ft_strlcat.c ft_putchar_fd.c \
		ft_strnstr.c ft_epur_str.c ft_itoa_base.c ft_strmap_i.c

INCLUDES = -I includes

SRCO = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -c $(CFLAGS) $(SRC) $(INCLUDES)
	ar rc $(NAME) $(SRCO)
	ranlib $(NAME)

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all
