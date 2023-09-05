#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 *
 * int main(int ac, char **av)
 * {
 *   int res;
 *
 *   if (ac != 3)
 *  {
 *      dprintf(2, "Usage: %s filename text\n", av[0]);
 *       exit(1);
 *   }
 *   res = create_file(av[1], av[2]);
 *   printf("-> %i)\n", res);
 *   return (0);
 *}
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
