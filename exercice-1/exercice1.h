#ifndef TAB_H
#define	TAB_H


/*
   But 
   une structure permettant la gestion de tableaux g�n�riques � une dimension en C
   La taille du tableau sera fix�e au moment de sa cr�ation
   il est necessaire de 
   1-conna�tre le nombre d��l�ments n pr�sents dans le tableau 
   2-conna�tre la taille m�moire b du type de donn�es qui sera stock�

*/



#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


/*  1- Cr�er une structure tableau permettant de g�rer des tableaux g�n�riques     */

struct tableau {
    int nb_element;
    int taille_reel;
    void** tab ;
};

typedef struct tableau* T ;

/*  2- D�finir une fonction creer permettant de cr�er un tableau g�n�rique de n �l�ments	 */

T creer(int);

/*  3- D�finir une fonction afficher permettant d�afficher les �l�ments du tableau	 */

void afficher(T);

/*	4- D�finir une fonction aleatoire permettant de cr�er un tableau de n �l�ments initialis�s al�atoirement */

T  aleatoire(int);


/*  5- D�finir une fonction detruire_tout permettant de lib�rer correctement la m�moire  */

//void detruire_tout(T*);

/* 6- D�finir une fonction trier permettant de trier les �l�ments du tableau g�n�rique  */

//T* trier(T*,int);



#endif

