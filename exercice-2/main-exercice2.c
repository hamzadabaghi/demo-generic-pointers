#include "exercice2.h"

struct test {
    long long int a;
    long long int b;
    long long int c;
};

static void afficher_structure(/* A COMPLETER */) {
    /* A COMPLETER */
}

void aleatoire_structure(/* A COMPLETER */) {
    /* A COMPLETER */
}

void detruire_struct(/* A COMPLETER */) {
    /* A COMPLETER */
}

static void afficher_int(/* A COMPLETER */) {
    /* A COMPLETER */
}

void aleatoire_int(/* A COMPLETER */) {
    /* A COMPLETER */
}

void detruire_int(/* A COMPLETER */) {
    /* A COMPLETER */
}
int main() {

    T_var tableau = aleatoire(10, sizeof(int), &afficher_var_int, &aleatoire_int, &detruire_int);
    T_var tableau_1 = aleatoire(10, sizeof(struct test), &afficher_var_structure, &aleatoire_structure, &detruire_structure);

    afficher_var(/* A COMPLETER */); // affichage de tableau
    afficher_var(/* A COMPLETER */); // affichage de tableau_1

    int a = 8473843;
    push(/* A COMPLETER */); 

    afficher_var(/* A COMPLETER */); // affichage de tableau

    pop(/* A COMPLETER */); // suppression du dernier élément de tableau
    pop(/* A COMPLETER */); // suppression du dernier élément de tableau
    pop(/* A COMPLETER */); // suppression du dernier élément de tableau_1
    pop(/* A COMPLETER */); // suppression du dernier élément de tableau_1

    detruire_tableau(/* A COMPLETER */); // destruction de tableau
    detruire_tableau(/* A COMPLETER */); // destruction de tableau_1

    return EXIT_SUCCESS;
}
