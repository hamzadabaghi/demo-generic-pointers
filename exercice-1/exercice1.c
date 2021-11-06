#include "exercice1.h"



/*  2- Définir une fonction creer permettant de créer un tableau générique de n éléments	 */

T creer(int n) {
	T tab = (T) malloc(sizeof(struct tableau));
	tab->nb_element = n;
	tab->taille_reel = 0;
	tab->tab = (void**)malloc(tab->nb_element * sizeof(void*));
	return tab;
}

/*  3- Définir une fonction afficher permettant d’afficher les éléments du tableau	 */

void afficher(T tab) {
	int i;
	for(i=0; i < tab->nb_element; i++){
		printf("T[%d] : %d \n", i, tab->tab[i]);
	}
}

/*	4- Définir une fonction aleatoire permettant de créer un tableau de n éléments initialisés aléatoirement */

T  aleatoire(int n) {
	int i;
	T tab = creer(n);
	
	for(i=0; i < tab->nb_element; i++){
		tab->tab[i] = 0;
	}
	return tab;
}

/*  5- Définir une fonction detruire_tout permettant de libérer correctement la mémoire  */

//void detruire_tout(T* tab) {
//	
//}

/*  6- Définir une fonction trier permettant de trier les éléments du tableau générique  */

//T* trier(T* tab ,int nb_element) {
//	
//	
//}

