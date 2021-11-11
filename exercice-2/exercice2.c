#ifndef TAB_HAs
#define	TAB_HAs
#include "exercice2.h"

/*  2- Définir une fonction creer permettant de créer un tableau générique de n éléments	 */

T_var creer_var(int n ,int taille_element) {

	T_var tab = (T_var) malloc(sizeof(struct tableau_variable));
	tab->nb_element = n;
	tab->taille_reel = 0;
	tab->tab = (void**)malloc(tab->nb_element * taille_element );
	return tab;
}

/*  3- Définir une fonction afficher permettant d’afficher les éléments du tableau , la fonction afficher executé est celle passé en parametre en main	 */

void afficher_var(T_var tab,int a) {
	int i;
	printf("\n");
	for(i=0; i < a; i++){
		printf("valeur %d  : ",i+1);
	    tab->affic(tab->tab[i]);

	}

}

/*	4- Définir une fonction aleatoire permettant de créer un tableau de n éléments initialisés aléatoirement 
	 - les méthodes qui seront executées sont celles passées en parametre en main
	 - on crée un tableau et on le remplie par des valeurs aleatoires

*/

T_var  aleatoire_var(int n,int taille_element,void (*affic)(struct tableau_variable *),void* (*aleat)(),void (*detru)(struct tableau_variable *), void* (*max)(struct tableau_variable *)) {

	int i ;

	/* create a generic table strut and passing functions to attributes */
	T_var tab = creer_var(n,taille_element);

	tab->affic = affic;
	tab->aleat = aleat;
	tab->detru = detru;
	tab->max = max;

	for(i=0 ; i < tab->nb_element; i++){
					void* element = tab->aleat();
					tab->tab[i] =tab->aleat();
					tab->taille_reel+=1;


	}
	return tab;

	}




/*  5- Définir une fonction detruire_tout permettant de libérer correctement la mémoire 
	 - mettre le nombre d'element à 0 puis liberer l'espace memoire
		
	 */


void detruire_tout(T_var tableau) {

	tableau->nb_element=0;
	tableau->taille_reel=0;
	tableau->detru(tableau);



}

void push(T_var tableau, void* item, int taille_element){
	int* t = (int*)malloc(sizeof(int));
	memcpy(t,&item,sizeof(int));
	if(tableau->taille_reel < tableau->nb_element){
		tableau->tab[tableau->taille_reel] = (int*)t;
		tableau->taille_reel++;
	}
	
	else{
		tableau->nb_element = tableau->nb_element * 2;
		int newSize = tableau->nb_element * taille_element;
		tableau->tab = (void**)realloc(tableau->tab, newSize);
		tableau->tab[tableau->taille_reel] = (int*)t;
		tableau->taille_reel++;
	}
	
}

/*
void* pop(T_var tableau, int taille_element){
	
	return tableau->tab[tableau->taille_reel];
}

*/


void* maximum(T_var tableau){
	return tableau->max(tableau);
}

#endif
