#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 * 
 * int main(int ac, char **av)
 * {
 *     ssize_t n;
 *
 *     if (ac != 2)
 *   {
 *        dprintf(2, "Usage: %s filename\n", av[0]);
 *        exit(1);
 *    }
 *    n = read_textfile(av[1], 114);
 *    printf("\n(printed chars: %li)\n", n);
 *   n = read_textfile(av[1], 1024);
 *    printf("\n(printed chars: %li)\n", n);
 *   return (0);
 * }
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
