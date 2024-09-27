#include <stdio.h>
#include <stdlib.h>

int main()
{
    float T[10];
    float somme,produit,moyenne;
    int i;
    printf("veuillez saiser les valeurs :\n");
    for (i=0;i<10;i++){
        printf("T[%d]= ",i);
        scanf("%f",&T[i]);
    }
    somme=0;
    produit=1;
    for (i=0;i<10;i++){
        somme=T[i]+somme;
        produit=produit*T[i];
    }
    moyenne=somme/10;
    printf("la somme des elements du tableau est %.2f\n",somme);
    printf("le produit des elements du tableau est %.2f\n",produit);
    printf("le moyenne des elements du tableau est %.2f\n",moyenne);
    return 0;
}
