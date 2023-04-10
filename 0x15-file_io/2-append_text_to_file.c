#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - this function appends text to the end of the file
 * @filename: this is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure or NULL
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == (-1))
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		ssize_t num_written = write(fd, text_content, strlen(text_content));

		if (num_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
