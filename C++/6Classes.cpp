#include <iostream>

using namespace std;

class exemplo{

    private: //indica que as próximas linhas são únicas para a classe 

        int a;
        int b;
        int c; 
    
    public: //indica que as próximas linhas podem ser acessadas de fora da classe 

    int set_a(int novo_a) //as funções são criadas normalmente 
    {   
        exemplo::a = novo_a; //ver 7Classes_schenenigans
    }
    
    int get_a()
    {
        return a;
    }



}; //requer ; no final 



int main()
{
    exemplo objeto_criado; //instanciar a classe configura um objeto 

    objeto_criado.set_a(2); //acessa as funções como se fosse struct 

    cout << objeto_criado.get_a() << endl;


    //Criando mais de um objeto 


    exemplo outro;

    printf("outro objeto a = %d\n", outro.get_a()); //diferente de java não precisa de self pra identificar qual o objeto, prova 

    outro.set_a(10);

    printf("Agora setado = %d\n" , outro.get_a());
}