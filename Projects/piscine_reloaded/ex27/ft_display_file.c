/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaide <pmarkaid@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:56:13 by pmarkaide         #+#    #+#             */
/*   Updated: 2023/10/11 14:27:43 by pmarkaide        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

int ft_display_file(char *filename) {
    int fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        printf("Cannot read file.\n");
        return -1;
    }  

    char buffer[BUFFER_SIZE];
    ssize_t bytesRead;

    while ((bytesRead = read(fd, buffer, BUFFER_SIZE)) > 0) {
        write(1, buffer, bytesRead);
    }

    close(fd);
    return 0;
}

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("File name missing.\n");
        return -1;
    }
    else if (argc > 2)
    {
        printf("Too many arguments.\n");
        return -1;
    }else
    {
    ft_display_file(argv[1]);
    }
}

