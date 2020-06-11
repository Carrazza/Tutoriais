#include <iostream>

#define MAX 10

using namespace std;


void inverte(int vetor[]);

int main()
{
    int vetor[MAX]; 

    cout << "vetor = ";

    for(int i = 0; i < MAX ; i++ )
    {
        vetor[i] = i;

        printf("%d ", vetor[i]);
    }

    cout << endl << "vetor depois da função = ";

    inverte(vetor); //vetor é passado por referência, ou seja as mudanças que ocorrerem na função vão continuar existindo quando a função acabar 

    for (int i = 0; i < MAX; i++)
    {
        vetor[i] = i;

        printf("%d ", vetor[i]);
    }

    printf("\n");
}

void inverte(int vetor[])
{
    for(int i = MAX-1 , j=0; j < MAX ; j++,i--)
    {
        vetor[j] = i;
    }
}