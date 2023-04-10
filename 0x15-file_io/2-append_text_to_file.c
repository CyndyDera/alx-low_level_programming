#include "main.h"
#include <stddef.h>

/**
 * _strlen - It counts the length of the string
 * @str: input string
 *
 * Return: It returns the length of a string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * append_text_to_file - It appends text at the end of a file
 * @filename: It is the name of the file
 * @text_content: It is the NULL terminated string to the file
 *
 * Return: On success 1 and on failure -1
 * If filename is NULL return -1
 * If text_content, don't add anything  to the file, return 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, wrote;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
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
