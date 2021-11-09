#include "exercice1.c"
#include <time.h>


struct test {
    long long int a;
    long long int b;
    long long int c;
};

typedef struct test Test;

/* Affiche une variable de type struct test 
 * Cette fonction doit ensuite �tre utilis�e dans la fonction afficher() 
 * pour afficher tous les �l�ments du tableau g�n�rique
 */
 
void afficher_structure(T value) {
	
	Test *a_afficher = (Test *)value;
    printf("a : %d | b : %d | c : %d \n",a_afficher->a,a_afficher->b,a_afficher->c);

}

/* Cr�e une variable de type struct test en m�moire. 
 * Cette fonction doit ensuite �tre utilis�e dans la fonction aleatoire() 
 * pour g�n�rer un tableau contenant des �l�ments de type struct test
 */
 
void* aleatoire_structure() {
	
	int inf = 1, sup = 9 , number;
	number = ( rand() % (sup - inf + 1)) + inf;
	Test str;
	str.a = number;
	str.b = ++number;
	str.c = ++number;
	Test *ptr = (Test *)malloc(sizeof(Test ));
	memcpy(ptr,&str,sizeof(struct test ));
    return ptr;

}

void detruire_struct(T tableau) {
		free(tableau);
		printf("la destruction est reussite");
}

void afficher_int(T _val) {

    int *a_afficher = (int*)_val;
    printf("%d \n",*a_afficher);
}

void* aleatoire_int() {

/*
	Ce programme d�clare une variable num qui g�n�re un nombre al�atoire entre 1 et 8. le but c'est de choisir un type parmis deux aleatoirement.
	pour ce faire nous initialiserons la limite inf�rieure du rand � 1 et La limite sup�rieure de la fonction rand � 8.
	cela g�n�rera un nombre al�atoire entre 1 � 8 en utilisant la formule.
*/

int inf = 1 , sup = 9 ;
    int number ;
	number = ( rand() % (sup - inf + 1)) + inf;
    int *ptr = (int*)malloc(sizeof(int));
    memcpy(ptr,&number,sizeof(int));
    return ptr;

}

void detruire_int(T tableau) {
	
	free(tableau);
	printf("la destruction est reussite");
}

int main() {

    srand(time(NULL));

    T array = aleatoire(10, sizeof(int),&afficher_int,&aleatoire_int,&detruire_int);
    T array_1 = aleatoire(10, sizeof(struct test), &afficher_structure, &aleatoire_structure, &detruire_struct);
    
    // -----------------------------------------//
    
    printf("Tableau des entiers : \n\n");
    
	printf("L\'affichage de array : \n");
	afficher(array,10);
	
	printf("\nL\'affichage de array apres le tri : \n");
	trier(array,10);
	afficher(array,10);
	
	printf("\nDestruction de array \n\n");
    detruire_tout(array); 
    
    
    printf("\n\nTableau des structures : \n\n");
	printf("L\'affichage de array_1 : \n");
	
    afficher(array_1,10);

	printf("\nDestruction de array \n\n");
    detruire_tout(array_1); 
	

    return EXIT_SUCCESS;
}
