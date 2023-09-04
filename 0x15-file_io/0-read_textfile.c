#include "main.h"

/**
 * read_textfile - Reads a textfile and prints it to POSIX stdout
 * @filename: pointer to filename
 * @letters: number of letters to be read and printed
 *
 * Return: actual number of letter read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openfile, readtext, writefile;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	openfile = open(filename, O_RDONLY);
	readtext = read(openfile, buffer, letters);
	writefile = write(STDOUT_FILENO, buffer, readtext);

	if (openfile == -1 || readtext == -1 ||
			writefile != readtext || writefile == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(openfile);

	return (writefile);
}
