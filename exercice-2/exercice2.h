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

struct tableau_variable {
    int nb_element;
    int taille_reel;
    void (*affic)(struct tableau_variable *);
    void* (*aleat)();
    void(*detru)(struct tableau_variable *);
    void** tab;
};

typedef struct tableau_variable* T_var;

/*  2- D�finir une fonction creer permettant de cr�er un tableau g�n�rique de n �l�ments	 */

T_var creer_var(int,int);

/*  3- D�finir une fonction afficher permettant d�afficher les �l�ments du tableau	 */

void afficher_var(T_var,int);

/*	4- D�finir une fonction aleatoire permettant de cr�er un tableau de n �l�ments initialis�s al�atoirement */

T_var  aleatoire_var(int,int,void (*affic)(struct tableau_variable *),void* (*aleat)(),void (*detru)(struct tableau_variable *));


/*  5- D�finir une fonction detruire_tout permettant de lib�rer correctement la m�moire  */

void detruire_tout(T_var);


void push(T_var, void*, int);


void* pop(T_var, int);

#endif

