#include "main.h"

/**
 * append_text_to_file - this function appends text to the end of the file
 * @filename: this is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure or NULL
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fo;

	if (filename == NULL)
	{
		return (-1);
	}

	fo = open(filename, O_WRONLY | O_APPEND);

	if (!fo)
	{
		return (-1);
	}

	while (text_content)
	{
		ssize_t none = write(fo, text_content, strlen(text_content));

		while (!none)
		{
			close(fo);
			return (-1);
		}
	}

	close(fo);
	return (1);
}

