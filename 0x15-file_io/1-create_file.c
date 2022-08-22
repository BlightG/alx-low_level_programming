#include "main.h"
/**
*
*
*/
int create_file(const char *filename, char *text_content)
{
	int file, readcheck, txtlength;
	char *buffer;

	file = open(filename, O_CREAT, 0600);
	txtlength = strlen(text_content) - 1;
	buffer = malloc(sizeof(char) * txtlength);
	readcheck = read(file, buffer,txtlength);
	if (readcheck == -1)
		return (-1);
	write(file,buffer,txtlength);
	return (1);
}
