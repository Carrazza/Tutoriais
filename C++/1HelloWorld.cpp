#include <iostream> //biblioteca padrão

using namespace std; //por enquanto aceitemos isso 

int main() //para todo programa C++ precisamos de uma função main por onde o compilador irá começar a rodar o código
{
    cout << "Hello World com quebra de linha \n"; //printando Hello World na tela

    //"Cout" é como se fosse o printf do C++. Os "<<" indicam como se fossem os dados que são mandados para função transformar em texto na tela, os caracteres especiais de C funcionam na string (como o \n) mas existem outras formas de gerar o quebra de linha como a seguinte:

    cout << "Hello World com endl" << endl;


}