# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfantoni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 14:16:28 by gfantoni          #+#    #+#              #
#    Updated: 2023/07/18 15:50:50 by gfantoni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Wextra -Werror

HEADER = ./includes/

SOURCE = \
	 ./functions/ft_putchar.c \
	 ./functions/ft_putstr.c \
	 ./functions/ft_display_file.c \
	 ./src/main.c \

OBJECTS = $(SOURCE:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean: 
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
