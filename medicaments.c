#include <stdio.h>
#include <string.h>
#include "medicaments.h"




void saisir(Medicament t[]) {
    int i;
    for(i=0;i<N;i++) {
        printf("Nom: ");
        scanf("%s", t[i].nom);
        printf("Code: ");
        scanf("%d", &t[i].code);
        printf("Date fabrication (j m a): ");
        scanf("%d %d %d", &t[i].jourFab, &t[i].moisFab, &t[i].anneeFab);
        printf("Date peremption (j m a): ");
        scanf("%d %d %d", &t[i].jourPer, &t[i].moisPer, &t[i].anneePer);
        printf("Prix: ");
        scanf("%f", &t[i].prix);
        printf("Vendus: ");
        scanf("%d", &t[i].vendus);
        printf("Stock: ");
        scanf("%d", &t[i].stock);
    }
}

void tri(Medicament t[]) {
    Medicament tmp;
    int i,j;

    for(i=0;i<N-1;i++) {
        for(j=0;j<N-i-1;j++) {

            if(t[j].anneePer > t[j+1].anneePer ||
              (t[j].anneePer == t[j+1].anneePer && t[j].moisPer > t[j+1].moisPer) ||
              (t[j].anneePer == t[j+1].anneePer && t[j].moisPer == t[j+1].moisPer && t[j].jourPer > t[j+1].jourPer)) {

                tmp = t[j];
                t[j] = t[j+1];
                t[j+1] = tmp;
            }
        }
    }
}
