#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: argc
 * @argv: argv
 *
 * Return: return (0)
 *
*/
int main(int argc, char *argv[])
{
	char *a, c[10];
	int i, j, k = 0;
	/*    printf("dd#Keygen by b44nz0r\n\n");*/
	if (argc != 2)
	exit(0);
	a = malloc(sizeof(char) * strlen(argv[1]));
	while (k < 3 || k >= 10)
	{
	/**
	 * if (argc !=)
	 * printf("\nThe username length should be 5 to 10 alphabets\n");
	 * printf("enter username: ");
	 * scanf("%s",a);
	 */
	a = argv[1];
	k = strlen(a);
	}

	i = k - 1;
	j = 0;
	while (i >= 0)
	{
		c[j] = a[i] + i;
		i--;
		j++;
	}
	c[j] = 0;
	printf("%s", c);
	/**
	 * printf("\nHit Enter to Exit\n");
	 * getchar();
	 * getchar();
	 */
	return (0);
}
