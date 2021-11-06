#include "exercice1.h"



/*  2- D�finir une fonction creer permettant de cr�er un tableau g�n�rique de n �l�ments	 */

T creer(int n) {
	T tab = (T) malloc(sizeof(struct tableau));
	tab->nb_element = n;
	tab->taille_reel = 0;
	tab->tab = (void**)malloc(tab->nb_element * sizeof(void*));
	return tab;
}

/*  3- D�finir une fonction afficher permettant d�afficher les �l�ments du tableau	 */

void afficher(T tab) {
	int i;
	for(i=0; i < tab->nb_element; i++){
		printf("T[%d] : %d \n", i, tab->tab[i]);
	}
}

/*	4- D�finir une fonction aleatoire permettant de cr�er un tableau de n �l�ments initialis�s al�atoirement */

T  aleatoire(int n) {
	int i;
	T tab = creer(n);
	
	for(i=0; i < tab->nb_element; i++){
		tab->tab[i] = 0;
	}
	return tab;
}

/*  5- D�finir une fonction detruire_tout permettant de lib�rer correctement la m�moire  */

//void detruire_tout(T* tab) {
//	
//}

/*  6- D�finir une fonction trier permettant de trier les �l�ments du tableau g�n�rique  */

//T* trier(T* tab ,int nb_element) {
//	
//	
//}

