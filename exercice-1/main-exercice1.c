#include "exercice1.h"

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

    srand(time(NULL));
    T array = aleatoire(10, sizeof(int), &afficher_int, &aleatoire_int, &detruire_int);
    T array_1 = aleatoire(10, sizeof(struct test), &afficher_structure, &aleatoire_structure, &detruire_struct);

    afficher(/* A COMPLETER */); // affichage de array
    afficher(/* A COMPLETER */); // affichage de array_1

    trier(/* A COMPLETER */);
    afficher(/* A COMPLETER */); // affichage de array

    detruire_tableau(/* A COMPLETER */); // destruction de array
    detruire_tableau(/* A COMPLETER */); // destruction de array_1

    return EXIT_SUCCESS;
}
