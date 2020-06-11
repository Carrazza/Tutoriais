#include <stdio.h>

int main()
{
		int a = 4;
		int *pointer;
		
		pointer = &a; //sem o *, ele recebe apenas endereços de memória para apontar.

		//Neste momento, o ponteiro está apontando para o endereço de memória da variável "a" 	 

		*pointer = 5; //usando o *, acessamos o valor que está dentro da memória e o mudamos. Nesse caso, mudamos o valor de "a" de  4 para 5 
	
		printf("a = %d\n\n\n", a);

}
