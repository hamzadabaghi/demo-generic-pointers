#ifndef TAB_HAs
#define	TAB_HAs
#include "exercice2.h"

/*  2- D�finir une fonction creer permettant de cr�er un tableau g�n�rique de n �l�ments	 */

T_var creer_var(int n ,int taille_element) {

	T_var tab = (T_var) malloc(sizeof(struct tableau_variable));
	tab->nb_element = n;
	tab->taille_reel = 0;
	tab->tab = (void**)malloc(tab->nb_element * taille_element );
	return tab;
}

/*  3- D�finir une fonction afficher permettant d�afficher les �l�ments du tableau , la fonction afficher execut� est celle pass� en parametre en main	 */

void afficher_var(T_var tab,int a) {
	int i;
	printf("\n");
	for(i=0; i < a; i++){
		printf("valeur %d  : ",i+1);
	    tab->affic(tab->tab[i]);

	}

}

/*	4- D�finir une fonction aleatoire permettant de cr�er un tableau de n �l�ments initialis�s al�atoirement 
	 - les m�thodes qui seront execut�es sont celles pass�es en parametre en main
	 - on cr�e un tableau et on le remplie par des valeurs aleatoires

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




/*  5- D�finir une fonction detruire_tout permettant de lib�rer correctement la m�moire 
	 - mettre le nombre d'element � 0 puis liberer l'espace memoire
		
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
