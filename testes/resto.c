//Exemplo de programa em C
//Par ou impar.
#include <stdio.h>
//#include <conio.h>
int main(void)
{
  int n1,resto;
  
  printf ("\nDigite um numero:");
  scanf ("%d", &n1);
  
  resto = n1 % 10;
  printf ("O resto da divisao e %d",resto);
  
  if (resto == 0)
    printf("\nO numero %d e par. \n",n1);
  else
    printf("\nO numero %d e impar. \n",n1);
  
  //getch();
  return(0);
}