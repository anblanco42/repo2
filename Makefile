# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 20:52:12 by anblanco          #+#    #+#              #
#    Updated: 2023/09/16 20:38:40 by anblanco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

SRC = ft_bzero.c \
	ft_isalnum.c \

CFLAGS = -Wall -Werror -Wextra

cc = clang

CLEAN = rm -Rf

OBJS := $(SRC: .c = .o)

all: $(NAME) #el comando all ejecuta todo lo que se encuentra en su interior.

$(NAME): %.o #utilizamos el comando "ar rcs" para generar nuestra libreria y le añadimos nuestros archivos .o.
	@ar rcs $(NAME) $(OBJS)

%.o:
	@$(cc) $(CFLAGS) -c $(SRC)

clean: 
	@$(CLEAN) ./$(OBJS)

fclean: 
	@$(CLEAN) ./$(OBJS)
	@$(CLEAN) ./$(NAME)

re: fclean all 
.PHONY: all clean fclean re 