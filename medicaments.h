#ifndef MEDICAMENT_H
#define MEDICAMENT_H

#define N 80

typedef struct {
    char nom[50];
    int code;

    int jourFab;
    int moisFab;
    int anneeFab;

    int jourPer;
    int moisPer;
    int anneePer;

    float prix;
    int vendus;
    int stock;
} Medicament;

void saisir(Medicament t[]);
void tri(Medicament t[]);
int recherche(Medicament t[], char nom[]);
void plus_cher(Medicament t[]);
float taux(Medicament t[]);

#endif