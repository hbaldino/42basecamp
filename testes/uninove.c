#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
 
int main (void) {
 
	int num = 2;
	int *ptr;
	int **ptr2;

	ptr = &num;
	ptr2 = &ptr;
	printf ("Valor=%d\n", num);
	printf ("%p\n", &num);
	printf ("%p\n", ptr2);
	printf ("%d\n", *ptr);
	printf ("%d\n", **ptr2);
 
}