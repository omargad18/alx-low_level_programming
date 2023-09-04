#include "main.h"

/**
 * read_textfile - reads text and print it from file
 * @filename: file to read
 * @letters: number of bytes
 *
 * Return: number of bytes to read or print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t bytes;
	char buffer[READ_BUF_SIZE * 8];

	if(!filename || !letters)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	bytes = read(file, &buffer[0], letters);
	bytes = write(STDOUT_FILENO, &buffer[0], bytes);
	close(file);
	return (bytes);
}
