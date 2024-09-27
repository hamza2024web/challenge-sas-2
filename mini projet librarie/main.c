#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    int quantite[];
    float prix[];
    char titre[][50];
    char auteur[][50];
    char (10) metre_a_jour;
    char (4) supr;
    printf("Combien de livres souhaitez-vous ajouter ? :" );
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("Entrer le titre du livre",i+1);
        scanf("%c",&titre[i]);
        printf("Entrer le prix du livre ",i+1);
        scanf("%f",&prix[i]);
        printf("Entrer l'auteur du livre ",i+1);
        scanf("%c",&auteur[i]);
        printf("Entrer ",i+1);
        scanf("%d",&quantite[i]);
    }
    printf("\nles livres ce qu'est enregistres est :\n");
    for (int i=0;i<n;i++){
        printf("Livre %d : Titre = %c .\n Auteur = %c . \n Prix = %f . \n quantite = %d ",i+1,titre[i],auteur[i],prix[i],quantite[i]);
    }
    printf("veuillez saiser le titre du livre qu'tu souhaite mettre a jour ca quantite ? :");
    scanf("%d",&metre_a_jour);
    for (int i=0;i<n;i++)
        if (metre_a_jour=titre[i]){
        printf("la quantite actuelle de livre %c est : %d",titre[i],quantite[i]);
        printf("veuillez saiser la nouvelle quantite :");
        scanf("%d",&quantite[i]);
        printf("la nouvelle quantite a été enregistrer avec succés");
    }
    printf("veuillez saiser le titre de livre qu'est tu as doit suppreme :");
    scanf("%c",&supr);
    for (int i=0;i<n;i++){
        if (supr==titre[i]){
            printf("la quantite actuelle de livre  %C est : %d",titre[i],quantite(i));
            for (int i=0;i<n;i++){
                scanf("%c",titre[i]);
                scanf("%c",auteur[i]);
                scanf("%f",prix[i]);
                scanf("%d",quantite[i]);
            }
            n--;
        }
        printf("le livre %c a été suprime avec succes.\n",titre[i]);
        break;
    }
    if (supr!==titre[i]){
        printf("le livre n'est pas trouve.\n");
    }
    printf("\nlivres restant :\n");
    for (int i=0;i<n;i++){
        printf("livre %c : titre = %c, auteur = %c, quantite = %d, prix = %f",i+1,titre[i],auteur[i],quantite[i],prix[i]);
    }
    return 0;
}
