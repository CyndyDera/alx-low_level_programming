#include "main.h"
#include <stddef.h>

/**
 * _strlen - It counts the length of the string
 * @str: input string
 *
 * Return: the lenght of the input string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * create_file - It creates a file
 * @filename: It is the name of the file to create
 * @text_content: It is a NULL terminated string to write to the file
 *
 * Return: On success 1, -1 on failure
 * If the filename is NULL return -1
 * If text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int file, wrote;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		wrote = write(file, text_content, _strlen(text_content));
		if (wrote == -1)
		{
			close(file);
			return (-1);
		}
		close(file);
		return (1);
	}
	else
	{
		close(file);
		return (1);
	}
}
