#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    printf("Combien de livres souhaitez-vous ajouter ? :" );
    scanf("%d",&n);
    int quantite[n];
    float prix[n];
    char titre[n][50];
    char auteur[n][50];
    char metre_a_jour[50];
    char supr[50];
    for (int i=0;i<n;i++){
        printf("Entrer le titre du livre",i+1);
        fgets("%s",&titre);
        printf("Entrer le prix du livre ",i+1);
        scanf("%f",&prix[i]);
        printf("Entrer l'auteur du livre ",i+1);
        fgets("%s",&auteur);
        printf("Entrer la quantité des livres :",i+1);
        scanf("%d",&quantite[i]);
    }
    printf("\nles livres ce qu'est enregistres est :\n");
    for (int i=0;i<n;i++){
        printf("Livre %d : Titre = %s .\n Auteur = %s . \n Prix = %f . \n quantite = %d ",i+1,titre[i],auteur[i],prix[i],quantite[i]);
    }
    printf("veuillez saiser le titre du livre qu'tu souhaite mettre a jour ca quantite ? :");
    fgets("%s",&metre_a_jour);
    for (int i=0;i<n;i++)
        if (strcmp(metre_a_jour,titre[i])==0){
        printf("la quantite actuelle de livre %s est : %d",titre[i],quantite[i]);
        printf("veuillez saiser la nouvelle quantite :");
        scanf("%d",&quantite[i]);
        printf("la nouvelle quantite a été enregistrer avec succés");
    }
    printf("veuillez saiser le titre de livre qu'est tu as doit suppreme :");
    fgets("%s",&supr);
    for (int i=0;i<n;i++){
        if (strcmp (supr,titre[i])==0){
            printf("la quantite actuelle de livre  %s est : %d",titre[i],quantite(i));
            for (int i=0;i<n;i++){
                fgets("%s",titre);
                fgets("%s",auteur);
                scanf("%f",prix[i]);
                scanf("%d",quantite[i]);
            }
            n--;
        }
        printf("le livre %s a été suprime avec succes.\n",titre[i]);
        break;
    }
    if (strcmp(supr,titre)!=0){
        printf("le livre n'est pas trouve.\n");
    }
    printf("\nlivres restant :\n");
    for (int i=0;i<n;i++){
        printf("livre %s : titre = %s, auteur = %s, quantite = %d, prix = %f",i+1,titre[i],auteur[i],quantite[i],prix[i]);
    }
    return 0;
}
