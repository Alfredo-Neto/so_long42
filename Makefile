NAME = so_long

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

MLX_DIR = mlx_linux
MLX = $(MLX_DIR)/libmlx.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFLAGS = -lft -lXext -lX11 -lmlx

SRCS = main.c

OBJS = $(subst .c,.o,$(SRCS))

all: $(NAME)

$(NAME): $(SRCS)
		@$(CC) $< $(LIB_FLAGS) -o $@

$(LIBFT):
	make -C $(LIBFT_DIR)

$(MLX):
	make -C $(MLX_DIR)

run:
	./so_long

clean:
		@rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: clean fclean all re


