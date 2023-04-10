#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024
/**
 * main - executes the code
 * print_usage_and_exit - this function prints usage and exits
 * print_write_error_and_exit - function writes text into the file and quits
 * print_read_error_and_exit - reads content of whatever is written in the file
 * print_close_error_and_exit - this closes the opened file and quits
 * @fd: this is file description
 * @filename: this is file identity
 * Return: 0 at the end of the execution
*/

void print_usage_and_exit(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

void print_read_error_and_exit(const char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

void print_write_error_and_exit(const char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

void print_close_error_and_exit(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

int main(int argc, char *argv[])
{
	int fd_from, fd_to, num_read, num_written, num_closed;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		print_usage_and_exit();

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_read_error_and_exit(argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		num_closed = close(fd_from);
		if (num_closed == -1)
			print_close_error_and_exit(fd_from);
		print_write_error_and_exit(argv[2]);
	}

	while ((num_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		num_written = write(fd_to, buffer, num_read);
		if (num_written == -1)
		{
			num_closed = close(fd_from);
			if (num_closed == -1)
				print_close_error_and_exit(fd_from);
			num_closed = close(fd_to);
			if (num_closed == -1)
				print_close_error_and_exit(fd_to);
			print_write_error_and_exit(argv[2]);
		}
	}

	if (num_read == -1)
	{
		num_closed = close(fd_from);
		if (num_closed == -1)
			print_close_error_and_exit(fd_from);
		num_closed = close(fd_to);
		if (num_closed == -1)
			print_close_error_and_exit(fd_to);
		print_read_error_and_exit(argv[1]);
	}

	num_closed = close(fd_from);
	if (num_closed == -1)
		print_close_error_and_exit(fd_from);
	num_closed = close(fd_to);
	if (num_closed == -1)
		print_close_error_and_exit(fd_to);

	return (0);
}
