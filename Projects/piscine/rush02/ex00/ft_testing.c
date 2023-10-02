#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft.h"
// #include "tf.h"

int	ft_atoi(char *nbr);
int **ft_split_nbr(int nbr, int **chunks);
int	**ft_create_chunks(void);
void my_strcpy(char *dest, const char *src, size_t size);

// dict entries[10];
void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
}

void my_strcpy(char *dest, const char *src, size_t size)
{
	size_t i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

dict *ft_load_dict(char *nbr, dict* entries)
{
	int i;
	int nb;
	int fd;
	ssize_t bytesRead;
	char buffer[2048];
	int j;
	int nbiiii;
	char c[1000];
	int index;

	nbiiii = 0;
	nb = 0;
	i = 0;
	j = 0;
	index = 0;

	// while (nbr[i] != 0)
	// {
	// 	nb = 10 * nb + nbr[i] - '0';
	// 	i++;
	// }
	i = 0;

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		write(1, "Open failed", 11);
	}

	while ((bytesRead = read(fd, buffer, 2048)) > 0)
	{
		while (i < bytesRead)
		{
			if (buffer[i] >= '0' && buffer[i] <= '9')
			{
				while (buffer[i] >= '0' && buffer[i] <= '9')
				{
					nbiiii = 10 * nbiiii + buffer[i] - '0';
					i++;
				}
				// printf("This is the nbiiii value which should be the key value as well: %d\n", nbiiii);

				// HERE WE ADD THE Integer 0 to the dictionary or something.
			}
			if ((buffer[i] = ':'))
			{
				i++;
				while (buffer[i] == 32)
					i++;
				while (buffer[i] >= 32 && buffer[i] <= 126)
				{
					c[j] = buffer[i];
					i++;
					j++;
				}
				c[j] = 0;
				// ADD TO DICTIONARY
				entries[index].key = nbiiii;
				my_strcpy(entries[index].value, c, sizeof(entries[index].value));

				// Print for testing
				// for (int i = 0; i < 1; i++)
				// {
				// 	printf("Entry %d: Key = %d, Value = %s\n", index, entries[index].key, entries[index].value);
				// }
				j = 0;
				nbiiii = 0;
				index++;
			}
			i++;
		}
	}
	// printf("%s", buffer);
	return entries;
}

int main(int argc, char **argv)
{
	dict numbers_dict[30000];
	int nbr;
	int **chunks;

	if (argc != 2)
		return (-1);

	nbr = ft_atoi(argv[1]);
	chunks = ft_create_chunks();
	ft_split_nbr(nbr, chunks);

	for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", chunks[i][j]);
        }
        printf("\n");
    }



	char c[] = "365";
	ft_load_dict(c, numbers_dict);

	    for (int i = 0; i < 32; i++)
    {
        printf("%d: %s\n", numbers_dict[i].key, numbers_dict[i].value);
    }
}