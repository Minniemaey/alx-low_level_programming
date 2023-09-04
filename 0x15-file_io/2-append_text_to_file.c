#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to file name
 * @text_content: null string to add
 * Return: 1 on success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ofile, wfile, null_str = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		for (null_str = 0; text_content[null_str];)
			null_str++;
	}

	ofile = open(filename, O_WRONLY | O_APPEND);
	wfile = write(ofile, text_content, null_str);

	if (ofile == -1 || wfile == -1)
		return (-1);

	close(ofile);

	return (1);
}
