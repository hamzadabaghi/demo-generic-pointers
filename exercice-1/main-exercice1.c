#include "exercice1.c"
#include <time.h>
struct test {
    long long int a;
    long long int b;
    long long int c;
};

static void afficher_structure(void * value) {

}

void aleatoire_structure(void * value) {

}

void detruire_struct(void * value) {

}

static void afficher_int(void *_val) {

    int *a_afficher = (int*)_val;
    printf("%d \n",*a_afficher);
}

void* aleatoire_int() {

	/*
			Ce programme d�clare une variable num qui g�n�re un nombre al�atoire entre 1 et 8. le but c'est de choisir un type parmis deux aleatoirement.
			pour ce faire nous initialiserons la limite inf�rieure du rand � 1 et La limite sup�rieure de la fonction rand � 8.
			cela g�n�rera un nombre al�atoire entre 1 � 8 en utilisant la formule.
	*/
int inf = 1 , sup = 8 ;
     int number ;
	number = ( rand() % (sup - inf + 1)) + inf;
	printf("\nrandom value is : %d ",number);
    int *ptr = (int*)malloc(sizeof(int));
    memcpy(ptr,&number,sizeof(int));
    return ptr;

}

/*int random_number(int min_num, int max_num)
    {
        int result = 0, low_num = 0, hi_num = 0;

        if (min_num < max_num)
        {
            low_num = min_num;
            hi_num = max_num + 1; // include max_num in output
        } else {
            low_num = max_num + 1; // include max_num in output
            hi_num = min_num;
        }

        result = (rand() % (hi_num - low_num)) + low_num;
        return result;
    }*/
void detruire_int(void * value) {

}

int main() {

   srand(time(NULL));

    T array = aleatoire(10, sizeof(int),&afficher_int,&aleatoire_int,&detruire_int);
   // T array_1 = aleatoire(10, sizeof(struct test), &afficher_structure, &aleatoire_structure, &detruire_struct);

    afficher(array,10);

    //afficher(array_1);

	/*
    trier(A COMPLETER );
    afficher(A COMPLETER ); // affichage de array

    detruire_tableau( A COMPLETER ); // destruction de array
    detruire_tableau( A COMPLETER ); // destruction de array_1
	*/

    return EXIT_SUCCESS;
}
