#include "Header.h"

void remplirTableau(int tab[],int taille){
	for(int i=0;i<taille;i++){
		tab[i]=rand()%100;
	}

}

void afficherTableau(int tab[], int taille){
	printf("valeurs du tableau :");
	for(int i=0;i<taille;i++){
		printf("\n %d",tab[i]);
	}

}
int indiceMax(int tab[], int taille){
	int max=tab[0];
	int indice =0;
	for(int i=1;i<taille;i++){
		if(tab[i]>max){
			max=tab[i];
			indice=i;
		}
	}
	return indice;
}
int indiceMin(int tab[], int taille){
	int min=tab[0];
	int indice =0;
	for(int i=1;i<taille;i++){
		if(tab[i]<min){
			min=tab[i];
			indice=i;
		}
	}
	return indice;
}

void trierTableau(int tab[], int taille){
	for(int i=0;i<taille -1;i++){
		for(int j=0;j<taille-i;j++){
			if(tab[j]>tab[j+1]){
				int temp=tab[j];
				tab[j]=tab[j+1];
				tab[j+1]=temp;
			}
		}
	}

}




