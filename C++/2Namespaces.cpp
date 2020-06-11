#include <iostream>

using namespace std; // as funções básicas tipo cout e coisas do tipo estão dentro da classe iostream,ndid

//Normalmente, n podemos nomear a duas variáveis com o mesmo nome, usando o namespace, podemos fazer isso sem problema, tem mais coisas que envolvem classes mas ainda n cheguei lá 


namespace one //criando um namespace
{
    int oi;
};

int main()
{
    int oi;

    oi = 5;

    one::oi = 10; //usando one:: acessamos o namespace e podemos usar a variável dentro dele 

    cout << "oi de dentro da main = " << oi << "\noi dentro do namespace = " << one::oi << endl; 

}