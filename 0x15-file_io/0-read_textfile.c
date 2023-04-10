#include "main.h"

/**
 * read_textfile - tries to read x(letters) number of letters
 * @filename: The File name
 * @letters: The Number of letters it should read
 * Return: Number of Read letters or zero.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int r, w;
	char *buf;

	if (!filename)
		return (0);


	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (fd == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (w);
}
