#include "main.h"

/**
 * append_text_to_file - this function appends text to the file end
 * @filename: this is the name of the file
 * @text_content: this is NULL terminator to be added
 * Return: -1 for failure, 1 for success
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (!fd)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		ssize_t none = write(fd, text_content, strlen(text_content));

		if (!none)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
