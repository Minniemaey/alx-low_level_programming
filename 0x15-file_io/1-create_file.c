#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file created
 * @text_content: string to write to the file
 * Return: on successs, 1 else -1
 */

int create_file(const char *filename, char *text_content)
{
	int o_file, wrt_file;
	int str = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (str = 0; text_content[str];)
			str++;
	}

	o_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt_file = write(o_file, text_content, str);

	if (o_file == -1 || wrt_file == -1)
		return (-1);

	close(o_file);

	return (1);
}
