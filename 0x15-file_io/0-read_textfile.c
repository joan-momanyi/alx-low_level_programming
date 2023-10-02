#include "main.h"
#include<stdlib.h>
/**
 * read_textfile - reads a textfile and prints it to stdout
 * @filename:file to read and print
 * @letters:number of letters to read and print
 * Return:w- actual number of letters read and printed
 * 0- when file cannot be opened or read, filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters);
{
	char *buff;
	ssize_t fd;
	ssize_t t;
	ssize_t w;

	fd = open(filename, O_RDONLY);
	if(fd == -1)
		return (0);

	buf = malloc(sizeof(char) *letters);
	t = read(buff,letters,fd);
	w = write(STDOUT_FILENO,buff, t);

	free(buff);
	close(fd);
	return (w);
}
