#include "main.h"
/**
* create_file - a function that creates a file
*
* @filename: pointer to a string for name of file
* @text_content: content to be filled inside the file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file, wcount;
	ssize_t txtlength;

	/*if the file name is NULL return -1*/
	if (filename == NULL)
		return (-1);

	/**
	* create a file with the name filename with
	* read and write permissions to users
	* if opening fails return -1
	*/
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	/**
	* txtlength gets the length of the text
	* to be inserted to the file
	*/
	if (!text_content)
		text_content = "";
	for (txtlength = 0; text_content[txtlength] != '\0' ; txtlength++)
		;
	wcount = write(file, text_content, txtlength);
	if (wcount == -1)
		return (-1);
	close(file);
	return (1);
}
