#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to check length
 *
 * Return: integer length of string
*/

int _strlen(char *s)
	{
		int i = 0;

		if (!s)
			return (0);
		while (*s++)
			i++;
		return (i);
	}

/**
 * create_file - function that creates a file
 * @filename: file to create
 * @text_content: text
 *
 * Return 1 on success 0 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes = 0, length = _strlen(text_content);

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (length)
		bytes = write(file, text_content, length);
	close(file);
	return (bytes == length ? 1 : -1);
}


