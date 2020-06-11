#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

    
    for(int a = 0; a < 10 ; a++)
    {
        int b = a%2;

        switch (b)
        {
            case 0:

                printf("%d div por 2\n",a);

                break;

            case 1:
                printf("%d n div por 2\n",a);

                break;
        }
    }



}