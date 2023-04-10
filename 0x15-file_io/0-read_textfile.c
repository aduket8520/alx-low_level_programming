#include "main.h"

/**
 * read_textfile - function reads number of characters in each file
 * @filename: this is a pointer to the file
 * @letters: the number of charcters in the file
 * Return: 0 for code failure or file not existing
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read = 0;
	char *buffer = NULL;
	FILE *file = NULL;

	if (filename == NULL)
	{
		return (0);
	}

	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}

	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytes_read = fread(buffer, sizeof(char), letters, file);
	if (bytes_read == -1)
	{
		free(buffer);
		fclose(file);
	}

	buffer[bytes_read] = '\0';

	if (!fwrite(buffer, sizeof(char), bytes_read, stdout))
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	free(buffer);
	fclose(file);

	return (bytes_read);
}
