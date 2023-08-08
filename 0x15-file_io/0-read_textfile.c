#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the standard output
 * @filename: file to read
 * @letters: numberof bytes to read
 *
 * Return: number of bytes read/printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	bytes = read(file, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(file);
	return (bytes);
}
