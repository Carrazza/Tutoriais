#include <stdio.h> 


#define HASH_TABLE_SIZE 30 
#define MAX_LENGHT 20

typedef struct person
{
    char name[MAX_LENGHT];
    int age;

}person;


void hash(person pessoa);

int main()
{

    person hash_table[HASH_TABLE_SIZE];

    person Nataniel = {.name = "Nataniel", .age = 20};
    person beb = {.name = "beb", .age = 20};
    person limao = {.name = "limao", .age = 20};
    person jomba = {.name = "jomba", .age = 20};

    hash(Nataniel);
    //printf("Nataniel %d \n", Nataniel.age);


}

void hash(person pessoa)
{
    int lenght = strlen(pessoa.name);
    int hash = 1;

    for(int i = 0 ; i < lenght ; i ++ )
    {
        hash = hash + pessoa.name[i] * pessoa.name[i];
    }

    hash = hash % HASH_TABLE_SIZE;
}