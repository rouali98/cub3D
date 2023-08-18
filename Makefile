# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rouali <rouali@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/17 12:13:49 by mamazzal          #+#    #+#              #
#    Updated: 2023/08/18 02:56:11 by rouali           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = cub3D

GNLN = ./gnln/get_next_line.c ./gnln/get_next_line_utils.c errors.c

MLX = minilibx/libmlx.a

MLX_FLAGS = -framework OpenGL -framework AppKit

SRC = cub3D.c ft_split.c ./parsing/parsing.c read_map.c \
			parsing/check_nswe.c parsing/check_rgb.c ft_atoi.c \
			free_double.c ft_isdigit.c parsing/check_valid_map.c

OBJ = $(SRC:.c=.o)

CC = cc

FLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) $(GNLN) $(MLX) $(MLX_FLAGS) -o $(NAME)
	@echo "\033[32m[ ✔ ] cub3D"

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all