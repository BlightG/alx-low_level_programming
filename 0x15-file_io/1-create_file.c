#include "main.h"
/**
*
*
*/
int create_file(const char *filename, char *text_content)
{
	int file, readcheck;
	ssize_t txtlength, wcount;
	char c;
	char *buffer;

	/*if the file name is NULL return -1*/
	if (filename == NULL)
		return (-1);

	/**
	* create a file with the name filename with
	* read and write permissions to users
	* if opening fails return -1
	*/
	file = open(filename, O_CREAT, 0600);
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
	c = c;
	readcheck = read(file, buffer,txtlength);
	wcount = write(file,&c,readcheck);
	if (readcheck == -1 || wcount == -1)
		return (-1);
	return (1);
}
