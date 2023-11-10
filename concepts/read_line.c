#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(void)
{
	char *buffer = NULL;
	size_t n = 0;
	char *prompt = "$ ";

	printf("%s", prompt);
	while (getline(&buffer, &n, stdin) != EOF)
	{
		buffer[strlen(buffer) - 1] = '\0';
		printf("%s\n", buffer);
		 printf("%s", prompt);


	}
	free(buffer);
	return (0);



}
