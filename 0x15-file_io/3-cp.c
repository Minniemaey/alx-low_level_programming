#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * cp_file - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: argument vector
 * Return: Always 0
 */

int cp_file(int argc, char *argv[])
{
	int src, dest, rfile, wfile;
	char *buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	src = open(argv[1], O_RDONLY, 0);
	dest = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	rfile = read(src, buffer, 1024);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while (rfile > 0)
	{
		wfile = write(dest, buffer, rfile);
		if (wfile != rfile)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (rfile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if ((close(src)) != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src), exit(100);
	if ((close(dest)) != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest), exit(100);
	return (0);
}
