#include <stdio.h>

int		main(void)
{
	int tab[3];
	int *ptr;

	ptr = tab;
	tab[0] = 20;
	tab[1] = 30;
	tab[2] = 40;
	printf("%d\n", *tab);
	printf("%d\n", *(tab + 1));
	printf("%d\n", *(tab + 2));
	return (0);
}