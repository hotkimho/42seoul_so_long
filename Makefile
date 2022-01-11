# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/02 17:03:19 by hkim2             #+#    #+#              #
#    Updated: 2022/01/11 16:01:40 by hkim2            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out

# Compiler and flags
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
CLIB	=	-Lmlx -lmlx -framework Metal -framework Metalkit -Imlx

INC_DIR = ./include/
SRC_DIR = ./src/
LIB_DIR = ./lib/

LIB_NAME = ./lib/libft.a

# SRCS and OBJS
SRCS	=	src/so_long.c\
			src/read_map.c\
			src/check_map.c\
			src/error.c\
			src/read_image.c\
			src/draw.c\
			src/draw_obj.c\
			src/key_hook.c\
			src/key_hook_util.c\
			src/exit.c\
			
OBJS = $(SRCS:%.c=%.o)

#
# Rules
#

all		: $(NAME)

%.o	:%.c
	$(CC) $(CFLAGS)

$(NAME): $(OBJ)
	make -C $(LIB_DIR)
	$(CC) $(CFLAGS) $(CLIB) $(SRCS) -L $(LIB_DIR) -lft -I $(INC_DIR) -o $(NAME)
	install_name_tool -change libmlx.dylib mlx/libmlx.dylib $(NAME)

clean	:
	rm -rf $(OBJS)

fclean	: clean
	rm -rf	$(NAME)

re		: fclean all