#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define MAX_ARRAY_SIZE 50
#define MAX_NUMBER_SIZE 1001

int* create_random_sorted_array();

int main()
{
    int *random_array;

    srand(time(NULL)); //inicializando a seed para randomness
    
    // for(int i = 0 ; i <20 ; i++)
    // {
    //     int r = rand() % MAX_ARRAY_SIZE;

    //     printf("%d\n", r);
    // }

    random_array = create_random_sorted_array();

    
}

int* create_random_sorted_array()
{
    int array_size = rand() % MAX_ARRAY_SIZE;

    int *array;

    array = (int*) malloc(sizeof(int)*array_size);

    printf("%p array size = %d \n ", array,array_size);

    int new_element;

    for (int i = 0; i < array_size; i++)
    {   
        
        do
        {
            new_element = rand() % MAX_NUMBER_SIZE;
            
        } while ( i > 0 && new_element < array[i-1]);
        
        
        array[i] = new_element;

        printf("%d ", array[i]);
    }

    printf("\n");

    return array;
}