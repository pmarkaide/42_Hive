#include "print.h"

void	ft_free_map(char **map, int rows);
char	**ft_malloc_map(int rows, int cols);
int **ft_map_to_grid(char map[12][13]);
void	ft_free_grid(int **grid, int rows);



int main()
{
    char map[12][13] = {
        ".........o..",
        ".o.ooo......",
        "............",
        "............",
        ".o..........",
        "........o...",
        "o.o........o",
        "......o...o.",
        "...o.o......",
        "o.oo.o....o.",
        "............",
        "......o..o..",
    };

    int **grid = ft_map_to_grid(map);

    ft_print_grid(grid, 12, 13);
	ft_free_grid(grid, 12);
	ft_free_map(map, 12);


    return 0;
}
