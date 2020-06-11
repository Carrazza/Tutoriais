#include <stdio.h>

int main()
{
    char buff[10];

    int n =0;
    char c;
    for (int n = 0; c != '\n'; n++) //pega input do usuário
    {
        c = getchar();

        if (c != '\n') buff[n] = c;

        else buff[n] ='\0';
    }

    printf("buff = %s \n" , buff);

}