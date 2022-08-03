#include <stdio.h>
/**
 *
 *
 *
 */
int is_strictly_positive(int elem)
{
	return (elem > 0);
}
int abs_is_98(int elem)
{
	return (elem == 98 || -elem == 98);
}
int main(void)
{
	int index;

	index = is_strictly_positive(2);
	printf("%d\n",index);
	index = abs_is_98(2);
	printf("%d\n",index);
	return (0);
}
