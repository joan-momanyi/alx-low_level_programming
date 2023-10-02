#include "main.h"
/**
 * append_text_to_file - appends text at the end of the file
 * @filename:name of the file
 * @text_context:string to add at the end of the file
 * Return: 1 on success and -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content);
{
	int fd,w,len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for(len = 0; text_content[len]; len++)
	}

	fd = open(filename, O_WRONLY | O_APPPEND);
	w = write (fd, text_content, len);

	if (w == -1 || fd == -1)
		return (-1);

	close(fd);

	return (-1);
}
