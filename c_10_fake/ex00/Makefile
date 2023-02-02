# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/31 14:43:43 by aroussea          #+#    #+#              #
#    Updated: 2023/01/31 14:58:07 by aroussea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = ft_display_file
SOURCE = main.c

all: $(NAME)
	
$(NAME): 
	$(CC) $(CFLAGS) $(SOURCE) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all