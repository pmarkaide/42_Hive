/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_stdin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:02:10 by fdessoy-          #+#    #+#             */
/*   Updated: 2023/07/19 21:07:18 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

//#define MAP_WIDTH 100

void ft_putchar(c)
{
	write(1, "Error", 5);
}

void exitWithError(const char* errorMessage) 
{
	printf("%s\n", errorMessage);
	exit(1);
}

void print_map(char* map, int length) 
{
	if (length <= 0) return;
	putchar(map[0]);
	print_map(map + 1, length - 1);
}

void ft_read_stdin(const char* filename) 
{
	int fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		exitWithError("Error opening file");
	}
	char* map = (char*)malloc(MAP_WIDTH * sizeof(char));
	if (map == NULL) 
	{
		close(fd);
		exitWithError("Error allocating memory");
	}
	int bytesRead = 0;
	char currentChar;
	while (bytesRead < MAP_WIDTH && read(fd, &currentChar, sizeof(char)) > 0 && currentChar != '\n') {
		map[bytesRead++] = currentChar;
	}
	close(fd);
	printMap(map, bytesRead);
	free(map);
}

int	main() 
{
	const char* filename = "map_generator.pl";
	readMap(filename);
	return (0);
}

