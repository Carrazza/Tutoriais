#include<stdio.h>
#include <stdlib.h>

int add_two(int a, int b);


int main()
{

    int (*pointer_to_function) (int,int); 

    pointer_to_function = add_two;

    int c = (*pointer_to_function)(3,5);

    printf("c = %d \n", c);
}

int add_two(int a, int b)
{
    
    return a+b;

}