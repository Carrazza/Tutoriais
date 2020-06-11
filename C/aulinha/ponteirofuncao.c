#include <stdio.h>


void troca_variavel(int *a , int *b);


int main()
{
	int a =3;

	int b = 4;
	
	troca_variavel(&a,&b);

	printf("a = %d , b = %d \n\n\n", a ,b);
}

void troca_variavel(int *a, int *b)
{
	int temp = *a;  
	
	*a = *b;
	*b = temp;
}
