#include "main.h"

/**
 * _strlen - function return length of string
 * @s: string to check length
 *
 * Return: int length of string
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
 * append_text_to_file - function appends text at the end of a file
 * @filename: file to create
 * @text_content: text to write
 *
 * Return: 1 on success 0 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes = 0, length = _strlen(text_content);
	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (length)
		bytes = write(file, text_content, length);
	close(file);
	return (bytes == length ? 1 : -1);
}
