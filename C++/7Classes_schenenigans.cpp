//o "a" colocado na função set_a não é o mesmo, por precaução, coloca o namespace





#include <iostream>

using namespace std; 

class doubts
{
    public:

        int a;


        int set_a(int a)
        {
            printf("'a' na função set= %d \n" , a);

            a = a;
        }

        int set_a_com_namespace(int a)
        {
            doubts::a = a;
        }

        // int teste_namespace(int a)
        // {
        //     printf("namespace stuffo mandado = %d" , a);
        // }
};


int main()
{

    doubts gon_try;

    printf("'a' antes de tudo = %d\n", gon_try.a);

    gon_try.set_a(3);

    printf("'a' depois de set_a = %d\n", gon_try.a);

    gon_try.set_a_com_namespace(10);

    printf("'a' depois de set_a com namespace = %d \n", gon_try.a );

    // no funfa ;-;   doubts::teste_namespace(1000);
}


