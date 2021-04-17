#include <stdio.h>

int a = 90;

int main(int argc, char *argv[])
{
    int matrix[4][4];
    int i = 0;
    int j = 0;
    
    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            //matrix[i][j] = 0;
            //printf("%d", matrix[i][j]);
			printf("%c", argv[0][0]);
            if (j <= 2)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
