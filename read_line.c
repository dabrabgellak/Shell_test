#include <headers.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int *read_line(void)
{
	char *tmp;
	size_t sizetmp = 1024;
	size_t chars;

	tmp = (char *)malloc(sizetmp * sizeof(char));
	if (tmp == NULL)
	{
		perror("Mallollito");
		exit(1);
	}

	printf("$");
	chars = getline(&tmp, &sizetmp, stdin);
	printf("Characters read: %lu\n", chars);
	printf("%s\n", tmp);
	
	return (0);
}
