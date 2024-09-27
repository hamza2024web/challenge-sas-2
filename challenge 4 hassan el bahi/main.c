#include <stdio.h>
#include <stdlib.h>

int main()
{
    float U[3],V[3];
    int i;
    float produit_scalaire;
    printf("veuillez saiser les elements du tableau :\n");
    for (i=0;i<3;i++){
        printf("U[%d] = ",i);
        scanf("%f",&U[i]);
        printf("V[%d] = ",i);
        scanf("%f",&V[i]);
    }
    produit_scalaire=0;
    for (i=0;i<3;i++){
        produit_scalaire=produit_scalaire+U[i]*V[i];
    }
    printf("le produit scalaire des deux vecteurs est : %.2f",produit_scalaire);
    return 0;
}
