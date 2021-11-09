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

struct tableau_variable {
    int nb_element;
    int taille_reel;
    void (*affic)(struct tableau_variable *);
    void* (*aleat)();
    void(*detru)(struct tableau_variable *);
    void** tab;
};

typedef struct tableau_variable* T_var;

/*  2- Définir une fonction creer permettant de créer un tableau générique de n éléments	 */

T_var creer_var(int,int);

/*  3- Définir une fonction afficher permettant d’afficher les éléments du tableau	 */

void afficher_var(T_var,int);

/*	4- Définir une fonction aleatoire permettant de créer un tableau de n éléments initialisés aléatoirement */

T_var  aleatoire_var(int,int,void (*affic)(struct tableau_variable *),void* (*aleat)(),void (*detru)(struct tableau_variable *));


/*  5- Définir une fonction detruire_tout permettant de libérer correctement la mémoire  */

void detruire_tout(T_var);


void push(T_var, void*, int);


void* pop(T_var, int);

#endif

