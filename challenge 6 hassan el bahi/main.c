#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10];
    int i,max;
    printf("veuillez saiser les elements du tableau :\n");
    for (i=0;i<10;i++){
        printf("T[%d] = ",i);
        scanf("%d",&T[i]);
    }
    max=T[0];
    for (i=0;i<10;i++){
        if (max<T[i])
        max=T[i];
    }
    printf("le maximum du tableau est : %d",max);
    return 0;
}
