#include "main.h"

char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
