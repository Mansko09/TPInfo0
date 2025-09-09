#include "Header.h"

#define ARRAY_SIZE :*8
/*
int main(int argc, char* argv[]){
	int size=atoi(argv[1]);
	int *tab=malloc(size*sizeof(int));//allocation de mémoire
	remplirTableau(tab,size);
	afficherTableau(tab,size);
	int indicemin = indiceMin(tab,size);
	printf("\n Le minimum est :%d",indicemin);

	int indicemax= indiceMax(tab,size);
	printf("\n Le maximum est :%d",indicemax);


	trierTableau(tab,size);
	printf("Tableau trié \n");
	afficherTableau(tab,size);
	free(tab);//libérer la mémoire
	//int a;
	//int *p;
	//p=&a;
	//*p=5;
	//a=12;
	//printf("%d %d\n", a,*p);

	return 0;

}
*/

int main(){
 	FILE *fp=fopen("fichierNbrAleatoires","r");
	if (fp== NULL){
		printf("Le fichier n'existe pas");
		return EXIT_FAILURE;
	}
	int n;
	fscanf(fp,"%d",&n); //lit la taille du tableau
	int *tab=malloc(n*sizeof(int));
	for (int i=0;i<n;i++){
		fscanf(fp,"%d", &tab[i]);//ajoute chaque valeur dans le tableau
	}
	printf("\n");
	int size=n;
	//afficherTableau(tab,size);
	int indicemin = indiceMin(tab,size);
	printf("\n Le minimum est :%d",indicemin);

	int indicemax= indiceMax(tab,size);
	printf("\n Le maximum est :%d",indicemax);

	fclose(fp);

	trierTableau(tab,size);
	
	FILE *fo=fopen("resultat.txt","w");
	for (int i=0;i<n;i++){
		fprintf(fo,"%d\n", tab[i]);//ajoute chaque valeur dans le fichier
	}

	free(tab);

	return 0;

}
