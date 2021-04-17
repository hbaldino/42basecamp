#include <stdio.h>
int main(int argc, char *argv[])
{
	int counter;

	printf("argc: %d\n", argc);
	counter = 0;
	while (counter < argc)
	{
		printf("argv[%d]: %s\n", counter, argv[counter]);
		counter++;
	}
	return (0);
}
