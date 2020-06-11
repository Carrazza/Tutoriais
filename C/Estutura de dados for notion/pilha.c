#include <stdio.h>
#include <stdlib.h>


typedef struct molde_pilha
{
    int tamanho_pilha; //tamanaho da pilha 

    int *pilha_array; //array usado como pilha 

}
molde_pilha;



molde_pilha create_pilha(molde_pilha *pilha); //retorna o endereço da pilha, por isso, quando for atribuir precisa de um ponteiro  

int main()
{
    molde_pilha new_pilha;

    new_pilha = create_pilha();

    printf("%ld", sizeof(&new_pilha));

}

molde_pilha create_pilha(molde_pilha *pilha)
{
    int n; //tamanho da pilha 

    scanf("%d",&n);

    pilha->tamanho_pilha = n;

    pilha->pilha_array = malloc(sizeof(int) * n);

}

