# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaitre <amaitre@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 12:19:31 by amaitre           #+#    #+#              #
#    Updated: 2016/03/05 14:51:53 by amaitre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	MonTrieur
SRC		=	MonTrieur.c
HEADERS	=	libft/includes
CC		=	gcc
CFLAGS	=

all: $(NAME)

$(NAME): $(SRC)
	@make -C libft
	@echo "\033[35mTrieur:\033[0m [Compilation:\033[33m $(NAME)\033[0m]"
	@$(CC) -o $(NAME) $(SRC) libft/libft.a -I $(HEADERS)
	@echo "[\033[35m--------------------------\033[0m]"
	@echo "[\033[36m------- OK - Trieur ------\033[0m]"
	@echo "[\033[35m--------------------------\033[0m]"

fclean:
	@make fclean -C libft
	@echo "\033[35mPRINTF:\033[0m [\033[31mSuppression de $(NAME)\033[0m]"
	@rm -f $(NAME)

re:
	@make re -C libft
	@echo "\033[35mPRINTF:\033[0m [\033[31mSuppression de $(NAME)\033[0m]"
	@rm -f $(NAME)
	@echo "\033[35mTrieur:\033[0m [Compilation:\033[33m $(NAME)\033[0m]"
	@$(CC) -o $(NAME) $(SRC) libft/libft.a -I $(HEADERS)
	@echo "[\033[35m--------------------------\033[0m]"
	@echo "[\033[36m------- OK - Trieur ------\033[0m]"
	@echo "[\033[35m--------------------------\033[0m]"

.PHONY: fclean all re
