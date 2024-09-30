#include "monty.h"
#define INITIAL_BUFFER_SIZE 256


ssize_t custom_getline(char **lineptr, size_t *n, FILE *stream)
{
        size_t noc = 0;
	int c;

	if (*lineptr == NULL)
	{
		*n = INITIAL_BUFFER_SIZE;
		*lineptr = malloc(*n);

		if (*lineptr == NULL)
		{
			return (-1);
		}
	}

	while ((c = fgetc(stream)) != EOF)
	{
		if (noc >= *n - 1)
		{
			size_t new_size = (*n) * 2;
			char *new_lineptr = malloc(new_size);
			if (new_lineptr == NULL)
			{
				return (-1);
			}

			memcpy(new_lineptr, *lineptr, *n);
			free(*lineptr);
			*lineptr = new_lineptr;
			*n = new_size;
		}
		(*lineptr)[noc++] = c;

		if (c == '\n')
		{
			break;
		}
	}
	if (noc == 0 && c == EOF)
	{
		return (-1);
	}
	(*lineptr)[noc] = '\0';
	return (noc);
}
