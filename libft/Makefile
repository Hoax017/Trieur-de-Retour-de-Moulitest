# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaitre <amaitre@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 12:19:31 by amaitre           #+#    #+#              #
#    Updated: 2016/03/05 14:50:21 by amaitre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRC		=	ft_atoi.c \
			ft_bzero.c \
			ft_chartostr.c \
			ft_coltostr.c \
			ft_gather.c \
			ft_intlen.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_isspace.c \
			ft_itoa.c \
			ft_lstadd.c \
			ft_lstadd_push_back.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstrev.c \
			ft_memalloc.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memmove.c \
			ft_memset.c \
			ft_nbchar.c \
			ft_nbword.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_replace.c \
			ft_show_tab.c \
			ft_sqrt.c \
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
			ft_strnrev.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strrev.c \
			ft_strsplit.c \
			ft_strstr.c \
			ft_strsub.c \
			ft_strtrim.c \
			ft_tablen.c \
			ft_tabmalloc.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_without_space_len.c \
			get_next_line.c
SRCO	=	$(SRC:.c=.o)
HEADERS	=	includes
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

all: $(NAME)

re: fclean all

%.o: %.c
	@echo "\033[35mLIBFT:\033[0m [Compilation:\033[33m $@\033[0m]"
	@$(CC) -o $@ -c $< $(CFLAGS) -I $(HEADERS)

$(NAME): $(SRCO)
	@ar rc $@ $^
	@ranlib $@
	@echo "[\033[35m--------------------------\033[0m]"
	@echo "[\033[36m------- OK - LIBFT -------\033[0m]"
	@echo "[\033[35m--------------------------\033[0m]"

clean:
	@echo "\033[35mLIBFT:\033[0m [\033[31mSuppression des .o\033[0m]"
	@rm -f $(SRCO)

fclean: clean
	@echo "\033[35mLIBFT:\033[0m [\033[31mSuppression de $(NAME)\033[0m]"
	@rm -f $(NAME)

.PHONY: re clean fclean all
