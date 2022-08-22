#include "main.h"
/**
* create_file - a function that creates a file
*
* @filename: pointer to a string for name of file
* @textcontent: content to be filled inside the file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file, readcheck;
	ssize_t txtlength, wcount;
	char *buffer;

	/*if the file name is NULL return -1*/
	if (filename == NULL)
		return (-1);

	/**
	* create a file with the name filename with
	* read and write permissions to users
	* if opening fails return -1
	*/
	file = open(filename, O_CREAT, O_RDWR, O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	/**
	* txtlength gets the length of the text
	* to be inserted to the file
	*/
	for (txtlength = 0; text_content[txtlength] != '\0' ; txtlength++)
		;
	/*creates a buffer file with size txtlength*/
	buffer = malloc(sizeof(char) * txtlength);
	if (buffer == NULL)
	{
		free(buffer);
		return (-1);
	}
	readcheck = read(file, buffer,txtlength);
	wcount = write(file,buffer,readcheck);
	if (readcheck == -1)
		return (-1);
	if (wcount == -1)
		return (-2);
	return (1);
}
