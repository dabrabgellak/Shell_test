#include <headers.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int separate_lines(int argc, __attribute__((unused)) char **argv)
{
	char *buffer = NULL;
	char *array;
	int characters=0, i = 0;
	size_t bufsize = 1024;
	while(argc != '\0')
	{
		printf("$");
		characters = getline(&buffer,&bufsize, stdin);
		if (characters== -1)
		{
			perror("ERROR");
		}
		else
		{
			array =strtok(buffer, " ");
			while(array != NULL)
			{
				printf("array[%i] = %s\n", i, array);
				array = strtok(NULL, " ");
				i++;
			}
		}
		break;
	}
	free(buffer);
	return(0);
}
