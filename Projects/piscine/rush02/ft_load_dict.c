#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "tf.h"

int	*ft_strcpy(char *dest, char *src);

dict ft_load_dict(char *dic_file)
{
	int i;
	int b;
	int nb;
	int fd;
	ssize_t bytesRead;
	char buffer[2048];
	int j;
	int nbiiii;
	char *c;
	int endOfFile;
	dict dic;
	

	nbiiii = 0;
	nb = 0;
	b = 0;
	j = 0;
	i = 0;
	endOfFile = 0;
	

	// while (nbr[i] != 0)
	// {
	// 	nb = 10 * nb + nbr[i] - '0';
	// 	b++;
	// }
	b = 0;

	// Determine the number of elements in the dictionary
    int dictSize = 32; // Replace with the desired number of elements

    // Allocate memory for the dictionary
   	dic.index = malloc(dictSize * sizeof(int *));
    dic.string = malloc(dictSize * sizeof(char *));
    for (int i = 0; i < dictSize; i++) {
        dic.index[i] = malloc(sizeof(int));
        dic.string[i] = malloc(sizeof(char));
    }


	fd = open(dic_file, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Open failed", 11);
	}

	while (!endOfFile) {
        bytesRead = read(fd, buffer, 2048);

	if (bytesRead == 0) {
            // End of file reached
            endOfFile = 1;
            break;
        } else if (bytesRead == -1) {
            // Error reading the file
            write(1, "Read failed", 11);
            break;
        }
		

	while(b < bytesRead)
		{
		// printf("Index is: %d\n", i);
		// printf("Writting index: %d\n", i);
        // Allocate memory for index
        // dic[i].index = malloc(sizeof(int *));
        // *(dic[i].index) = malloc(sizeof(int));


		if (buffer[b] >= '0' && buffer[b] <= '9')
		{
			// printf("Reading number...\n");
			nbiiii = 0;
			while(buffer[b] >= '0' && buffer[b] <= '9')
			{
				nbiiii = 10 * nbiiii + buffer[b] - '0';
				b++;
			}
			// printf("Nbiiii: %d\n", nbiiii);
			
        	// Set the index value
        	// *(dic[i].index) = malloc(sizeof(int));
        	*dic.index[i] = nbiiii;

 		}
		// printf("Nbiiii on dic: %d\n", *dic.index[i]);
		while(buffer[b] == 32 || buffer[b] == ':')
			b++;

		// printf("Reading string...\n");
		j = 0;
		// Cound length of string
		int l;
		l = 0;
		int d;
		d = b;
		while ((buffer[d] >= 32 && buffer[d] <= 126) && buffer[d] != '\0')
			{
			l++;
			d++;
			}

		// dic[i].string = malloc(sizeof(char *));
        // *(dic[i].string) = malloc((l + 1) * sizeof(char));
		c = malloc((l + 1) * sizeof(char));
		// printf("Finnish reading string. Length: %d\n",l);
		while (buffer[b] >= 32 && buffer[b] <= 126)
		{
			c[j] = buffer[b];
			b++;
			j++;
		}
		c[j] = '\0';
		// ADD TO DICTIONARY 
		// printf("String saved as: %s\n", c);
		//The index string does not change, it keeps as a zero even though the string is below is nbiiiii which increases in
		// every loop?
		// my_strcpy(dic[i].index = nbiiii; [nbiiii].string, c, sizeof(dic[i].string));
		// dic[i].index = nbiiii; my_strcpy[nbiiii].string, c, sizeof(dic[i].string));
		//dic[i].index = nbiiii;
		// my_strcpy(dic[i].string, c, sizeof(dic[i].string));
		// Allocate memory for the string
		
 		//dic[i].string = malloc((ft_strlen(c) + 1) * sizeof(char));
		ft_strcpy(dic.string[i], c);
		i++;
		// printf("Testing the c string here: %s\n", c);
		b++;
		}
		}

	// for (int t = 0; t < 32; t++)
	// {
        // printf("Entry %d: index = %d\n", t, *(dic.index[t]));
    // }
	dic.length = dictSize;
	return(dic);
}
