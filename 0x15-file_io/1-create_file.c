#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

/**
 * create_file - Create a function that creates a file.
 * @filename: this is name of the file to create
 * @text_content: is a NULL terminated string
 * Return: -1 for NULL or failure, 1 on success and
*/
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (!fd)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		ssize_t bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
