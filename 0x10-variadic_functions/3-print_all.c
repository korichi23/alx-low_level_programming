#include <stdio.h>
#include <stdargs.h>
/**
 * print_all-function
 * @format:par
 * Return:void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				if (va_arg(ap, char *))
					printf("%s", va_arg(ap, char *));
				while (va_arg(ap, char *) == NULL)
				{
					printf("(nil)");
					break;
				}
				break;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
