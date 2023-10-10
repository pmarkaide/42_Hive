# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmarkaide <pmarkaid@student.hive.fi>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/10 19:20:34 by pmarkaide         #+#    #+#              #
#    Updated: 2023/10/10 19:22:19 by pmarkaide        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc
CFLAGS = -Wall -Wextra -Werror
DIR = srcs
SRCS = $(DIR)/ft_putchar.c $(DIR)/ft_putstr.c $(DIR)/ft_strcmp.c $(DIR)/ft_strlen.c $(DIR)/ft_swap.c
OBJS = $(SRCS:.c=.o)
INCDIR = includes
INCFLAGS = -I$(INCDIR)

all: libft.a

libft.a: $(OBJS)
	ar rcs libft.a $(OBJS)

$(DIR)/%.o: $(DIR)/%.c
	$(CC) $(CFLAGS) $(INCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f libft.a

re: fclean all