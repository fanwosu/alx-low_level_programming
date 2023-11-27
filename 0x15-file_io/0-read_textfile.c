#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints it to POSIX stdout.
 * @filename: pointer to the name of the file.
 * @letters: number of lettes to be read and print.
 * Return: If the function fails or filename is NULL - 0.
 * the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *chara;

	if (filename == NULL)
	{
		return (0);
	}
	chara = malloc(sizeof(char) * letters);
	if (chara == NULL)
	{
		return (0);
	}
	op = open(filename, O_RDONLY);
	rd = read(o, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, r);

	if (op == -1 || rd == -1 || wr == -1 || wr != r)
	{
		free(chara);
		return (0);
	}

	free(chara);
	close(op);

	return (wr);
}
