#include <iostream>

using namespace std;


typedef struct hello{

    int x;
    int y;

} hello;

//structs são iguais a C

void errado(hello exemplo);
void certo(hello *exemplo);

int main()
{
    hello exemplo; 

    exemplo.y = 2;

    exemplo.x = 3;

    cout << "struct depois da atribuição \nx = " << exemplo.x << endl << "y= " << exemplo.y << endl;



    //passagem por parâmetro em funções 

    errado(exemplo);

    cout << "Passagem por parâmetro \n\n" << "não mudou x = " << exemplo.x << endl << "não mudou y= " << exemplo.y << endl << endl;

    certo(&exemplo);

    cout << "mudou x = " << exemplo.x << endl << "mudou y= " << exemplo.y << endl;
}

void errado(hello exemplo){

    //aqui temos uma copia do struct "exemplo", estamos modificando os valores dessa cópia, ou seja, quando a função acabar esta cópia será destruída junto com a nossa atribuição 

    exemplo.x = 120;
    exemplo.y = 200;

}

void certo(hello *exemplo)
{
    //aqui sim mudamos diretamente no ponto de memória os valores de X e Y 

    exemplo -> x = 100;
    exemplo -> y = 111;

}