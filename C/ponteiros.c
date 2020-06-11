#include <stdio.h>

int ponteiro_recebendo_parametro_funcao(int *oi);

int main()
{
    int a = 4;

    teste(&a);

    printf("a = %d\n", a);
}

int ponteiro_recebendo_parametro_funcao(int *oi)
{   
    *oi = 5;
}