#include "main.h"
/**
  * create_file - creates a file with rw------- permissions
  * @filename: name of the file
  * @text_content: contents of the file.
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int _file, l, wr;

	if (filename == NULL)
		return (-1);
	_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (_file == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(_file);
		return (1);
	}
	for (l = 0; text_content[l]; l++)
		;
	wr = write(_file, text_content, l);
	if (close(_file) == -1)
		return (-1);
	return (wr == -1 ? -1 : 1);
}
