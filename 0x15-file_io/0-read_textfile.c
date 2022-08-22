#include "main.h"
/**
*
*
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	/*int field;*/

	open(filename, 0);
	return(write(1,filename,letters));
}
