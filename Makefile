# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/02 17:03:19 by hkim2             #+#    #+#              #
#    Updated: 2022/01/13 20:12:57 by hkim2            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	so_long

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
CLIB	=	-Lmlx -lmlx -framework Metal -framework Metalkit -Imlx

INC_DIR = ./include/
SRC_DIR = ./src/
LIB_DIR = ./lib/
MLX_DIR = ./mlx/

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

%.o	: %.c
	$(CC) $(CFLAGS)
	
$(NAME)	: $(OBJ)
	make -C $(LIB_DIR)
	make -C $(MLX_DIR)
	$(CC) $(CFLAGS) $(CLIB) $(SRCS) -L $(LIB_DIR) -lft -L $(MLX_DIR) -lmlx -I $(INC_DIR) -o $(NAME)
	install_name_tool -change libmlx.dylib mlx/libmlx.dylib $(NAME)

all		: $(NAME)

clean	:
	make -C $(LIB_DIR) clean
	make -C $(MLX_DIR) clean
	rm -rf $(OBJS)

fclean	: clean
	make -C $(LIB_DIR) fclean
	rm -rf $(NAME)

re		: fclean all

PHONY	: all clean fclean re