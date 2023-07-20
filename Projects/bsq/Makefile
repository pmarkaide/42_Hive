SRCS = ft_malloc_map.c ft_free_map.c ft_map_to_grid.c ft_free_grid.c
OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I.

all: bsq

bsq: $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) mawop.c -o bsq

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)
