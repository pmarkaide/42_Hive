/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:24:59 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/08 13:25:01 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Online C compiler to run C program online
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>



int *input(void)
{
    // read view input
    // return four arrays (views)
    
}


int ***grid(void)
{
    // create an 4x4x5 board
    // asign values to 0
    // output 4x4x5 grid with 0 values
    
    int*** arr = (int***)malloc(4 * sizeof(int**));
    for (int i = 0; i < 4; i++) {
        arr[i] = (int**)malloc(4 * sizeof(int*));
        for (int j = 0; j < 4; j++) {
            arr[i][j] = (int*)malloc(5 * sizeof(int));
            for (int k = 0; k < 4; k++) {
                arr[i][j][k] = 0;
            }
        }
    }
    return (arr);
}

int ***find_edges(int *top, int *rig, int *dow, int *lef, int ***grid) {
    
   int	***find_edges(int *top, int *rig, int *dow, int *lef, int ***grid)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		if (top[i] == 4)
			while (j < 4)
				grid[j][i][0] = ++j;
		if (rig[i] == 4)
			while (j < 4)
				grid[i][j++][0] = j;
		i++;
		j = 0;
	}
	return (grid);
}
}



int *clean_valids(void)
{
    // read grid [][][1-4]
    // remove invaid options from row and columns
}

int *check_ones(void)
{
    // read grid [][][1-4]
    // find ones with only one option
    // write in grid [][][0] known values
    // if none, continue
}

int *grod(void)
{
    // read grid
    // return a copy
}

int *guess(void)
{
    // read grod [][][1-4]
    // asign first value to [][][0]
    // continue iteration
    // clean_valids > check_ones
    
}

void print(int ***grid) {
    // Read grid
    // Output board
    
    grid = grid;

    int i, j;

    printf("First Layer:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", grid[i][j][0]);
            //scanf("%d",&arr[i][j][k]);
        }
        printf("\n");
    }
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
	dow[0] = 4;
    dow[1] = 3;
    dow[2] = 2;
    dow[3] = 1;
	lef[0] = 1;
    lef[1] = 2;
    lef[2] = 2;
    lef[3] = 2;
    
    print(grid());
    int ***mgrid = find_edges(top, rig, dow, lef, grid());
    print(mgrid);
    return 0;
}

    