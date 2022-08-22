#include "main.h"
/**
*
*
*/
int create_file(const char *filename, char *text_content)
{
	int file, readcheck;
	size_t txtlength;
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
	txtlength = strlen(text_content);
	/*creates a buffer file with size txtlength*/
	buffer = malloc(sizeof(char) * txtlength);
	if (buffer == NULL)
	{
		free(buffer);
		return (-1);
	}

	readcheck = read(file, buffer,txtlength);
	if (readcheck == -1)
		return (-1);
	write(file,buffer,readcheck);
	free(buffer);
	return (1);
}
