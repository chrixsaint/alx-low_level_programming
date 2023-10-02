#include "main.h"
/**
 * create_file - create and write into a file
 * and copy content in it
 * @filename: the filename to be created
 * @text_content: the content to be copied into the file
 * Return: 1 if suceesful or -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int pld;
	int cal_letters;
	int rwr;

	if (!filename)
		return (-1);
	pld = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (pld == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (cal_letters = 0; text_content[cal_letters]; cal_letters++)
		;
	rwr = write(pld, text_content, cal_letters);
	if (rwr == -1)
		return (-1);
	close(pld);
	return (1);
}
