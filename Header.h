#ifndef HEADER_H
#define HEADER_H


#include <stdlib.h>
#include <stdio.h>

#define TAILLE 100

void remplirTableau(int tab[],int taille);
void afficherTableau(int tab[], int taille);
int indiceMin(int tab[],int taille);
int indiceMax(int tab[],int taille);

void trierTableau(int tab[],int taille);

#endif
