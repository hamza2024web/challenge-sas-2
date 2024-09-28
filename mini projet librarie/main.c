#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    printf("Combien de livres souhaitez-vous ajouter ? : " );
    scanf("%d",&n);
    int quantite[n];
    float prix[n];
    char titre[n][100];
    char auteur[n][100];
    char metre_a_jour[100];
    char supr[100];
    char recherche[100];
    for (int i=0;i<n;i++){
        printf("Entrer le titre du livre :\n",i+1);
        fgets(titre[i],100,stdin);
        printf("Entrer le prix du livre :\n",i+1);
        scanf("%f",&prix[i]);
        printf("Entrer l'auteur du livre :\n",i+1);
        fgets(titre[i],100,stdin);
        printf("Entrer la quantité des livres :\n",i+1);
        scanf("%d",&quantite[i]);
    }
    printf("\nles livres ce qu'est enregistres est %d :\n");
    for (int i=0;i<n;i++){
        printf("Livre %d : Titre = %s .\n Auteur = %s . \n Prix = %f . \n quantite = %d ",i+1,titre[i],auteur[i],prix[i],quantite[i]);
    }
    printf("veuillez saiser le livre que vous cherchez :");
    fgets(recherche,100,stdin);
    if(strcmp(recherche,titre[i])==0){
        printf("le titre que vous cherchez est %s\n :",titre[i]);
        break;
    }
    printf("veuillez saiser le titre du livre qu'tu souhaite mettre a jour ca quantite ? :");
    fgets(metre_a_jour,100,stdin);
    for (int i=0;i<n;i++){
        if (strcmp(metre_a_jour,titre[i])==0){
        printf("la quantite actuelle de livre %s est : %d",titre[i],quantite[i]);
        printf("veuillez saiser la nouvelle quantite :");
        scanf("%d",&quantite[i]);
        printf("la nouvelle quantite a été enregistrer avec succésn.\n");
        break;
        }
    }
    printf("veuillez saiser le titre du livre a supprimer :");
    fgets(supr,100,stdin);
    for (int i=0;i<n;i++){
        if (strcmp (supr,titre[i])==0){
            printf("livre %s supprime avec succes.\n",titre[i]);
            for (int j=i;j<n-1;j++){
                strcpy(titre[j],titre[j+1]);
                strcpy([auteur[j],auteur[j+1]);
                strcpy((prix[j],prix[j+1]));
                strcpy(quantite[j],qauntite[j+1]);
        }
            n--;
    }
    break;
    if (strcmp(supr,titre)!=0){
        printf("le livre n'est pas trouve.\n");
    }
    printf("\nlivres restant :\n");
    for (int i=0;i<n;i++){
        printf("livre %s : titre = %s, auteur = %s, quantite = %d, prix = %f",i+1,titre[i],auteur[i],quantite[i],prix[i]);
    }
    return 0;
}
