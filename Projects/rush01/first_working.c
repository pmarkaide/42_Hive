// Online C compiler to run C program online
// Online C compiler to run C program online
// Online C compiler to run C program online
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>



int *input(void)
{
    // read view input
    // return four arrays (views)
    
}

void ft_write_column(int y, int ***grid){
    int x;
    
    x = 0;
    while (x < 4){
        grid[0][x][y] = x + 1;
        x++;
    }
}

void ft_write_row(int x, int ***grid){
    int y;
    
    y = 0;
    while (y < 4){
        grid[0][x][y] = y + 1;
        y++;
    }
}

int ft_count_valids(int x, int y, int ***grid){

    int z;
    int c;
    
    z = 1;
    c = 0;
    while (z < 5){
        if(grid[z][x][y] == 0)
            c++;
        z++;
    }
    return (c);
    
}

int ***ft_create_grid(void)
{
    // create an 4x4x5 board
    // asign values to 0
    // output 4x4x5 grid with 0 values
    
    int*** arr = (int***)malloc(5 * sizeof(int**));
    for (int z = 0; z < 5; z++) {
        arr[z] = (int**)malloc(4 * sizeof(int*));
        for (int x = 0; x < 4; x++) {
            arr[z][x] = (int*)malloc(4 * sizeof(int));
            for (int y = 0; y < 4; y++) {
                arr[z][x][y] = 0;
            }
        }
    }
    int z;
    int x;
    int y;
    z = 0;
    x =0;
    y =0;
    for (int z = 0; z < 5; z++)
    {
        for (int x = 0; x < 4; x++)
        {
            for (int y = 0; y < 4; y++)
            {
                arr[z][x][y] = z;
            }
        }
    }

    
    return (arr);
}

int	***find_edges(int *top, int *rig, int *dow, int *lef, int ***grid)
{
	int	x;
	int	y;
	int i;

	x = 0;
	y = 0;
	// Find the fours and write
	while (x < 4)
	{
		if (top[x] == 4)
			ft_write_column(x, grid);
		x++;
	}
	
	while (y < 4)
	{
		if (lef[y] == 4)
			ft_write_row(y, grid);
		y++;
	}
	// Find the ones and write
	i = 0;
	while (i < 4)
	{
		if (top[i] == 1)
			grid[0][0][i] = 4;
		if (lef[i] == 1)
			grid[0][i][0] = 4;
		if (dow[i] == 1)
			grid[0][3][i] = 4;
		if (rig[i] == 1)
			grid[0][i][3] = 4;
		i++;
	}
	return (grid);
}



int	***clean_valids_in_locked(int ***grid)
{
    // read grid [][][1-4]
    // remove invalid options from row and columns
    
    int x;
    int y;
    x =0;
    y =0;
    for (int x = 0; x < 4; x++)
        {
        for (int y = 0; y < 4; y++)
        {
            if (grid[0][x][y] != 0){
                    grid[1][x][y] = 0;
                    grid[2][x][y] = 0;
                    grid[3][x][y] = 0;
                    grid[4][x][y] = 0;
            }
        }
    }
    return(grid);
}

int	***clean_valids_by_rows_and_columns(int ***grid)
{
    // read grid [][][1-4]
    // remove invalid options from row and columns
    
    int x;
    int y;
    int z;
    x =0;
    y =0;
    for (int x = 0; x < 4; x++)
        {
        for (int y = 0; y < 4; y++)
        {
            if (grid[0][x][y] == 1){
                //remove rows
                grid[1][x][1] = 0;
                grid[1][x][2] = 0;
                grid[1][x][3] = 0;
                //remove cols
                grid[1][1][y] = 0;
                grid[1][2][y] = 0;
                grid[1][3][y] = 0;
            }
            if (grid[0][x][y] == 2){
                //remove rows
                grid[2][x][1] = 0;
                grid[2][x][2] = 0;
                grid[2][x][3] = 0;
                //remove cols
                grid[2][1][y] = 0;
                grid[2][2][y] = 0;
                grid[2][3][y] = 0;
            }
            if (grid[0][x][y] == 3){
                //remove rows
                grid[3][x][1] = 0;
                grid[3][x][2] = 0;
                grid[3][x][3] = 0;
                //remove cols
                grid[3][1][y] = 0;
                grid[3][2][y] = 0;
                grid[3][3][y] = 0;
            }
            if (grid[0][x][y] == 4){
                //remove rows
                grid[4][x][1] = 0;
                grid[4][x][2] = 0;
                grid[4][x][3] = 0;
                //remove cols
                grid[4][1][y] = 0;
                grid[4][2][y] = 0;
                grid[4][3][y] = 0;
            }
        }
        }
    return(grid);
}

void check_ones(int ***grid, int c)
{
    // read grid [][][1-4]
    // find ones with only one option
    // write in grid [][][0] known values
    // if none, continue
    int x;
    int y;
    int z;
    
    x =0;
    y =0;
    z = 1;
    for (int x = 0; x < 4; x++)
        {
        for (int y = 0; y < 4; y++)
            {
                if ( ft_count_valids(x, y, grid) == 3){
                    //printf("Only one valid found at %d, %d \n",x,y);
                    z = 1;
                        while ( z < 5 ){
                            if (grid[z][x][y] != 0){
                                grid[0][x][y] = grid[z][x][y];
                                //printf("Writting %d at %d, %d \n",grid[z][x][y], x,y);
                            }
                            z++;
                        }
                }
            }
    }
}



void ft_write_the_first_number(int ***grid)
{
    // read grod [][][1-4]
    // asign first value to [][][0]
    // continue iteration
    // clean_valids > check_ones
    
    int z;
    z = 1;
    
    for (int x = 0; x < 4; x++)
        {
        for (int y = 0; y < 4; y++)
            {
                //printf("Searchingn for a invalid the number!\n");
                if ( ft_count_valids(x, y, grid) == 2){
                    while ( z < 5 ){
                        if (grid[z][x][y] != 0){
                            grid[0][x][y] = grid[z][x][y];
                            printf("I've changed the number!\n");
                        }
                        return ;
                    }
            }
        }
    }
    
}

void print_board(int ***grid, int i) {
    // Read grid
    // Output board

    int x, y;

    for (x = 0; x < 4; x++) {
        for (y = 0; y < 4; y++){
            printf("%d ", grid[i][x][y]);
        }
        printf("\n");
    }
}

int ft_is_board_full(int ***grid){
    int x;
    int y;

    x = 0;
    y = 0;

    for (int x = 0; x < 4; x++)
        {
        for (int y = 0; y < 4; y++){
                if (grid[0][x][y] == 0){
                //printf("Board is NOT Full!\n");
                    return(0);
                }
        }
    }
printf("Board IS Full!\n");
return(1);
}

int ft_count_views(int y,  int ***grid)
{
    int c;
    int x;
    int max_height;
    
    c = 0;
    x = 0;
    max_height = 0;
    
    while (x < 4){
        if (grid[0][x][y] > max_height){
            c++;
            max_height = grid[0][x][y];
        }
    x++;
    }
    return (c);
}


int ft_is_board_legal(int *lef, int ***grid){


    for (int y = 0; y < 4; y++){
        if (ft_count_views(y , grid) != lef[y]){
            printf("Board is NOT legal!:\n");
            return (0);
        }
    }
    printf("Board IS legal!:\n");
    return (1);
} 

void ft_erase_the_first_number(int ***grid)
{
    // read grod [][][1-4]
    // asign first value to [][][0]
    // continue iteration
    // clean_valids > check_ones
    
    int z;
    z = 1;
    
    for (int x = 0; x < 4; x++)
        {
        for (int y = 0; y < 4; y++)
            {
                //printf("Searchingn for a invalid the number!\n");
                if ( ft_count_valids(x, y, grid) == 2){
                    while ( z < 5 ){
                        if (grid[z][x][y] != 0){
                            grid[z][x][y] = 0;
                            printf("I've erased the number!\n");
                        }
                        return ;
                    }
            }
        }
    }
    
}

int ***ft_solve_puzzle(int* lef, int ***grid){
    
    int *try;
    
    while (ft_is_board_full(grid) == 0){
            //print_board(grid,0);
            printf("solving board...\n");
            grid = clean_valids_in_locked(grid);
            grid = clean_valids_by_rows_and_columns(grid);
            //print_board(grid,1);
            printf("\n");
            check_ones(grid,3);
        }
        
    
    printf("Board completed! \n");
    print_board(grid,0);
    if(ft_is_board_legal(lef, grid) == 0){
        printf("No valid board found!!!\n");
        return(grid);
        }

printf("VALID board found!!!");
return (grid);
}

int ***ft_copy_grid(int ***grid) {
    int ***grod = malloc(4 * sizeof(int **));
    
    for (int i = 0; i < 5; i++) {
        grod[i] = malloc(4 * sizeof(int *));
        for (int j = 0; j < 4; j++) {
            grod[i][j] = malloc(4 * sizeof(int));
            for (int k = 0; k < 4; k++) {
                grod[i][j][k] = grid[i][j][k];
            }
        }
    }
    
    return (grod);
}

void ft_free_memory(int ***grid) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            free(grid[i][j]);
        }
        free(grid[i]);
    }
    free(grid);
}



int main(void) {
    
    // hard code create the Views
    int* top = (int*)malloc(4 * sizeof(int));
    int* rig = (int*)malloc(4 * sizeof(int));
    int* lef = (int*)malloc(4 * sizeof(int));
    int* dow = (int*)malloc(4 * sizeof(int));
    
    top[0] = 4;
    top[1] = 3;
    top[2] = 2;
    top[3] = 1;
	rig[0] = 1;
    rig[1] = 2;
    rig[2] = 2;
    rig[3] = 2;
	dow[0] = 1;
    dow[1] = 2;
    dow[2] = 2;
    dow[3] = 2;
	lef[0] = 4;
    lef[1] = 3;
    lef[2] = 2;
    lef[3] = 1;
    
    printf("Initializing board:\n");
    int ***grid;
    grid = ft_create_grid();
    grid = find_edges(top, rig, dow, lef, grid);
    grid = clean_valids_in_locked(grid);
    grid = clean_valids_by_rows_and_columns(grid);
    print_board(grid,0);
    printf("\n");
    
    // Start with grod
    // Copy it first 
    int ***grod = ft_copy_grid(grid);
    
    ft_write_the_first_number(grod);
    print_board(grod,0);
    ft_solve_puzzle(lef, grod);
    // ft_free_memory(grod);
    
    printf("\nTrying again round 2:\n");
    grod = ft_copy_grid(grid);
    ft_erase_the_first_number(grod);
    // print_board(grod,0);
    
    // int i;
    // i = 0;
    // while (i < 5){
    //      print_board(grod,i);
    //      printf("\n");
    //      i++;
    // }
    ft_write_the_first_number(grod);
    ft_solve_puzzle(lef, grod);
    
    // int i;
    // i = 0;
    // while (i < 5){
    //      print_board(grid,i);
    //      printf("\n");
    //      i++;
    // }
    //ft_solve_puzzle(lef, grod);
 
    
    
    // Start with grod
    // Copy it first 
    
    //int ***grod = ft_copy_grid(grid);
    // grod = grid;
    // print_board(grod,0);
    //ft_erase_incorrect_number(grod);
    // print_board(grod,0);
    // //printf("The view count for first row is %d \n", ft_count_views(0, grid));
    // ft_is_board_legal(lef, grod);
    
    // printf("Grod round 0:\n");
    // ft_write_the_first_number(grod);
    // print_board(grod,0);
    // grod = clean_valids_in_locked(grod);
    // grod = clean_valids_by_rows_and_columns(grod);
    // // check_ones(grod,3);
    // // printf("Grod round 1:\n");
    // printf("\n");
    // print_board(grod,2);
    // printf("Erasing the number:\n");
    // int i;
    // i = 0;
    // while (i < 5){
    //      print_board(grod,i);
    //      printf("\n");
    //      i++;
    // }
    // ft_write_the_first_number(grod);
    // print_board(grod,2);
    // grod = clean_valids_in_locked(grod);
    // grod = clean_valids_by_rows_and_columns(grod);
    // check_ones(grod,3);
    // printf("Grod round 2:\n");
    // print_board(grod,0);
    // grod = clean_valids_in_locked(grod);
    // grod = clean_valids_by_rows_and_columns(grod);
    // check_ones(grod,3);
    // printf("Grod round 3:\n");
    // print_board(grod,0);
    // ft_is_board_legal(lef, grod);
    // ft_is_board_full(grod);
    
    return 0;
}
