#include "variadic_functions.h"

/**
 * print_char - print a char
 *
 * @arg: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
*/

void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_int - print an integer
 *
 * @arg: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
*/

void print_int(va_list arg)
{
	int n = va_arg(arg, int);

	printf("%d", n);
}

/**
 * print_float - print a float
 *
 * @arg: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
*/

void print_float(va_list arg)
{
	float n = va_arg(arg, double);

	printf("%f", n);
}

/**
 * print_string - print a string
 *
 * @arg: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
*/

void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
<<<<<<< HEAD
 * print_all - a function that prints anything
 *
 * @format: A string of character representing
 *          the argument types
 *
 * Description: If any argument not of type char,
 *              int, float or char * is ignored
 *
 * Return: nothing
=======
* print_all - prints chracters with format specified in pointer
*
* @format: specifies the way to print
>>>>>>> 6edfdcf61def672549f683b8a14567543da15fdb
*/

void print_all(const char * const format, ...)
{
<<<<<<< HEAD
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";
	func_printer funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		/**
		 * 4 equals to the number of funcs present
		 * so if j is less than four and our current
		 * format is not equal to format in funcs
		 * then j becomes j + 1
		 */
		while (j < 4 && (format[i] != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print_func(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}
=======
	va_list arg;
	int n, j, integer;
	char character;
	char *string;
	float floating;

	n = strlen(format);
	va_start(arg, format);
	j = 0;
	while (j < n)
	{
		if (format[j] == 'i' || format[j] == 'c' || format[j] == 'f' || format[j] == 's')
		{
			switch (format[j])
			{
				case 'i':
					integer = va_arg(arg, int);
					printf("%d", integer);
					break;
				case 'c':
					character = va_arg(arg, int);
					printf("%c", character);
					break;
				case 'f':
					floating = va_arg(arg, double);
					printf("%f", floating);
					break;
				case 's':
					string = va_arg(arg, char*);
					printf("%s", string);
					break;
			}
			if (j != (n - 1))
				printf(", ");
		}
		j++;
	}
	printf("\n");
	va_end(arg);
}
>>>>>>> 6edfdcf61def672549f683b8a14567543da15fdb
