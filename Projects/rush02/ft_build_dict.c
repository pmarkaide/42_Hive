/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:32:10 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/07/15 17:32:19 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

dict	ft_build_dict(char* filename) {
	dict dic;
	dic.length = 0;
	dic.index = NULL;
	dic.string = NULL;

	file = open("numbers.dict", O_RDONLY);
	if (file == -1 ) {
		printf("Failed to open the file\n");
		return dic;
	}

	int i;
	i = 0;
	int j;
	j = 0;

	while ((bytesRead = read(fd, buffer, 2048)) > 0)
    {
        if (buffer[i] > '0' && buffer[i] <= '9')
        {
            dic.index[j] = 
        }



	// Count the number of lines in the file
	// int lines = 0;
	// char c;
	// while ((c = fgetc(file)) != EOF) {
	// 	if (c == '\n') {
	// 		lines++;
	// 	}
	// }
	// fseek(file, 0, SEEK_SET);

	// // Allocate memory for the arrays
	// dic.index = malloc(lines * sizeof(int));
	// dic.string = malloc(lines * sizeof(char*));

	// // Read and parse the lines
	// char buffer[100];
	// int	i = 0;
	// while (fgets(buffer, sizeof(buffer), file) != NULL) {
	// 	sscanf(buffer, "%d: %[^\n]", &dic.index[i], buffer);

	// 	dic.string[i] = malloc((strlen(buffer) + 1) * sizeof(char));
	// 	strcpy(dic.string[i], buffer);

	// 	i++;
	// }

	// dic.length = lines;
	// fclose(file);
	return dic;
}
