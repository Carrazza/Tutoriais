#include <stdio.h>

int somar_idade_peso(int peso, int idade);


typedef struct pessoa
{
    int idade;

    int peso;

    int (*somar_idade_peso)(int,int);   

}pessoa;


int main()
{
    pessoa teste = {.idade = 5 , .peso = 10 , .somar_idade_peso = somar_idade_peso};

    pessoa.somar_idade_peso();
}

int somar_idade_peso(int peso, int idade)
{
    return peso+idade;
}