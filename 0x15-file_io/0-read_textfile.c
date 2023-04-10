#include "main.h"
#include <stddef.h>

/**
 * read_textfile - it reads a text file and printsit to the POSIX stdio
 * @filename: name of the file
 * @letters: it is the number of letters it should read and print
 *
 * Return: It returns the actual number of letters and prints it
 * If it cannot  be opened , it should return 0
 * If the filename is NULL, return 0
 * If write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, n_read, wrote;
	char *buffer;

	buffer = malloc(sizeof(*buffer) * (letters + 1));
	if (filename == NULL || buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	n_read = read(file, buffer, letters);
	if (n_read == -1)
		return (0);
	buffer[n_read] = '\0';
	wrote = write(STDOUT_FILENO, buffer, n_read);
	if (wrote != n_read)
		return (0);
	free(buffer);
	close(file);
	return (n_read);
}
