#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "holberton.h"
#include <fcntl.h>

void shell_loop(void)
{
	char *line;
	char **arguments;
	int status;
	
	do {
	printf("$ ");
	line = _get_line();/** Reads the line */
	arguments = _strtok(line, " "); /** Separates the line */
	status = _execute(arguments); /** Executes it*/
	
	/** Free memory */
	free(line);
	free(arguments);
	} while (status);
}
