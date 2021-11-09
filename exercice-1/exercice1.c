#ifndef TAB_HAs
#define	TAB_HAs


#include "exercice1.h"

/*  2- Définir une fonction creer permettant de créer un tableau générique de n éléments	 */

T creer(int n,int taille_element) {

	T tab = (T) malloc(sizeof(struct tableau));
	tab->nb_element = n;
	tab->taille_reel = 0;
	tab->tab = (void**)malloc(tab->nb_element * taille_element );
	return tab;
}

/*  3- Définir une fonction afficher permettant d’afficher les éléments du tableau	 */

void afficher(T tab,int a) {
	int i;
	printf("\n");
	for(i=0; i < a; i++){
		printf("valeur %d  : ",i+1);
	    tab->affic(tab->tab[i]);

	}

}

/*	4- Définir une fonction aleatoire permettant de créer un tableau de n éléments initialisés aléatoirement */

T  aleatoire(int n,int taille_element,void (*affic)(void *),void* (*aleat)(),void (*detru)(void *)) {

	int i ;

	/* create a generic table strut and passing functions to attributes */
	T tab = creer(n,taille_element);

	tab->affic = affic;
	tab->aleat = aleat;
	tab->detru = detru;

	for(i=0 ; i < tab->nb_element; i++){
					void* element = tab->aleat();
					tab->tab[i] =tab->aleat();
					tab->taille_reel+=1;


	}
	return tab;

	}




/*  5- Définir une fonction detruire_tout permettant de libérer correctement la mémoire  */


void detruire_tout(T tableau) {

	tableau->nb_element=0;
	tableau->taille_reel=0;
	tableau->detru(tableau);



}


/*  6- Définir une fonction trier permettant de trier les éléments du tableau générique  */


void trier(T tableau ,int taille) {

	int i, j, c;
	for(i=0;i<taille-1;i++){
			for(j=i+1;j<taille;j++){
		    	 if ( *(int *)tableau->tab[i] > *(int *) tableau->tab[j] ) {
		            void* element = tableau->tab[i];
		            tableau->tab[i] = tableau->tab[j];
		            tableau->tab[j] = element ;
		            
		        }
	}
       


	}
    
}
#endif
