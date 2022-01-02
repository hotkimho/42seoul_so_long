# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hokim <hokim@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/02 17:03:19 by hokim             #+#    #+#              #
#    Updated: 2022/01/02 20:09:00 by hokim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out

# Compiler and flags
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
#CLIB	=	-Lmlx -lmlx -framework OpenGL -framework Appkit -Imlx
CLIB	=	-Lmlx -lmlx -framework Metal -framework Metalkit -Imlx

INC_DIR = ./include/
SRC_DIR = ./src/
# SRCS and OBJS
SRCS	=	\
			src/so_long.c
OBJS = $(SRCS:%.c=%.o)

#
# Rules
#

all		: $(NAME)

%.o	:%.c
	$(CC) $(CFLAGS)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(CLIB) $(SRCS) -I $(INC_DIR) -o $(NAME)
	install_name_tool -change libmlx.dylib mlx/libmlx.dylib $(NAME)

clean	:
	rm -rf $(OBJS)

fclean	: clean
	rm -rf	$(NAME)

re		: fclean all