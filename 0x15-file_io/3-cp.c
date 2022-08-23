#include "main.h"
/**
*
*
*/
int main (int argc, char *argv[])
{
	ssize_t wcount, read_check, close_check;
	int filefrom, fileto;
	char *buffer;

	if (argc != 3)
	{
		dprintf(0,"Usage: cp file_from file_to\n");
		exit(98);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		free(buffer);
		return (1);
	}
	filefrom = open(argv[1], O_RDONLY);
	if (filefrom == -1)
	{
		dprintf(0,"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	read_check = read(filefrom, buffer, 1024);
	if (read_check == -1)
	{
		dprintf(0,"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fileto = open(argv[2],O_RDWR | O_TRUNC | O_CREAT, 0664);
	if (fileto == -1)
	{
		dprintf(0,"Error: Can't write to file %s\n", argv[2]);
		exit(98);
	}
	wcount = write(fileto, buffer, read_check);
	if (wcount == -1)
	{
		dprintf(0,"Error: Can't write to file %s\n", argv[2]);
		exit (99);
	}
	close_check = close(filefrom);
	if (close_check == -1)
	{
		dprintf(0,"Error: Can't close fd %d\n", filefrom);
		exit (100);
	}
	close (fileto);
		if (close_check == -1)
	{
		dprintf(0,"Error: Can't close fd %d\n", fileto);
		exit (100);
	
	}
	free(buffer);
	return(0);
}
