#include "main.h"

/**
 * _strlen - return length of string
 * @s: string length to check
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int itr = 0;

	if (!s)
		return (0);
	while (*s++)
		itr++;
	return (itr);
}

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: file name
 * @text_content: text to write
 *
 * Return: 1 Success 0 Failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (len)
		bytes = write(file, text_content, len);
	close(file);
	return (bytes == len ? 1 : -1);
}
