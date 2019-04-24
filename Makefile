# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lachille <lachille@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/09 05:27:21 by lachille          #+#    #+#              #
#    Updated: 2019/04/23 19:05:33 by anonymous        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c \
			ft_bzero.c \
			ft_isascii.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memalloc.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putchar.c \
			ft_putendl_fd.c \
			ft_putendl.c \
			ft_putnbr_fd.c \
			ft_putnbr.c \
			ft_putstr_fd.c \
			ft_putstr.c \
			ft_strcat.c \
			ft_strchr.c \
			ft_strclr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdel.c \
			ft_strdup.c \
			ft_strequ.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strnequ.c \
			ft_strnew.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strsplit.c \
			ft_strstr.c \
			ft_strsub.c \
			ft_strtrim.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstiter.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstadd.c

OBJS = $(SRCS:.c=.o)

FLAG = -Wextra -Werror -Wall

PROG = "a preciser || ex: make compil PROG=atoi"

$(NAME) :
	gcc $(FLAG) -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

all : $(NAME)

compil : ##compil une fonction en .o
	gcc $(FLAG) -c ft_$(PROG).c

compil2 : compil  ##compil le .o d'une fonction precise et creer un executable avec un main dans le repertoire test
	gcc $(FLAG) -c Test_$(PROG).c
	gcc $(FLAG) -o $(PROG)_EXE ft_$(PROG).o Test_$(PROG).o

cleanEXE :
	rm *_EXE

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean
