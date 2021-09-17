
[comando pra rodar:](gcc main.c -I ./mlx_linux -L ./mlx_linux -lmlx -lX11 -lXext -o so_long)

para rodar utilizando a math.h, voce deve linkar explicitamente com -lm:
```gcc main.c -I ./mlx_linux -L ./mlx_linux -lm -lmlx -lX11 -lXext -o so_long```