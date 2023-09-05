#include "main.h"

char *_alloc(char *buff);
void error_and_exit(int desc);

/**
 * _alloc - Allocates bytes to  buffer
 * @buff: buffer name
 * Return: buffer pointer
 */
char *_alloc(char *buff)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", buff);
		exit(99);
	}

	return (buffer);
}

/**
 * error_and_exit - Closes file descriptors.
 * @desc: The file descriptor to be closed.
 */
void error_and_exit(int desc)
{
	int f_exit;

	f_exit = close(desc);

	if (f_exit == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_exit);
		exit(100);
	}
}

/**
 * cp_file - Copies the contents of a file to another file
 * @argc: number of arguments
 * @argv: argument vector
 * Return: Always 0 on success
 */

int cp_file(int argc, char *argv[])
{
	int src, dest;
	int rfile, wfile;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = _alloc(argv[2]);
	src = open(argv[1], O_RDONLY);
	rfile = read(src, buffer, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src == -1 || rfile == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wfile = write(dest, buffer, rfile);
		if (src == -1 || wfile == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		rfile = read(src, buffer, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	} while (rfile > 0);
	free(buffer);
	error_and_exit(src);
	error_and_exit(dest);

	return (0);
}
