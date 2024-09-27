#include <stdio.h>
#include <stdlib.h>

int main()
{
    char T[6];
    int i;
    T[0]='A';
    T[1]='E';
    T[2]='I';
    T[3]='O';
    T[4]='U';
    T[5]='Y';
    printf("les votelles de la langue francais est : \n");
    for (i=0;i<6;i++)
        printf("%c \n",T[i]);
    return 0;
}
