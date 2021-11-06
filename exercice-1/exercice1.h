#ifndef TAB_H
#define	TAB_H


/*
   But 
   une structure permettant la gestion de tableaux génériques à une dimension en C
   La taille du tableau sera fixée au moment de sa création
   il est necessaire de 
   1-connaître le nombre d’éléments n présents dans le tableau 
   2-connaître la taille mémoire b du type de données qui sera stocké

*/



#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


/*  1- Créer une structure tableau permettant de gérer des tableaux génériques     */

struct tableau {
    int nb_element;
    int taille_reel;
    void** tab ;
};

typedef struct tableau* T ;

/*  2- Définir une fonction creer permettant de créer un tableau générique de n éléments	 */

T creer(int);

/*  3- Définir une fonction afficher permettant d’afficher les éléments du tableau	 */

void afficher(T);

/*	4- Définir une fonction aleatoire permettant de créer un tableau de n éléments initialisés aléatoirement */

T  aleatoire(int);


/*  5- Définir une fonction detruire_tout permettant de libérer correctement la mémoire  */

//void detruire_tout(T*);

/* 6- Définir une fonction trier permettant de trier les éléments du tableau générique  */

//T* trier(T*,int);



#endif

