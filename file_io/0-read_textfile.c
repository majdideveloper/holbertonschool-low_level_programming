#include "main.h"
/**
 * read_textfile - function that read a text file
 * it to the POSIX
 * @filename: file name
 * @letters: number of letters in text
 * Return: number of letters it text
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *text;

	if (filename == NULL)
		return (0);

	text = malloc(letters);
	if (text == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, text, letters);
	w = write(STDOUT_FILENO, text, r);

	/*On error, -1 is returned*/
	if (o == -1 || r == -1 || w == -1)
	{
		free(text);
		return (0);
	}

	free(text);
	close(o);
	return (w);
}
