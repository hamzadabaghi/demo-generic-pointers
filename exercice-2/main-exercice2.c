#include "exercice2.c"

struct test {
    long long int a;
    long long int b;
    long long int c;
};

typedef struct test Test;

void afficher_var_structure(T_var value) {
	Test *a_afficher = (Test *)value;
    printf("a : %d | b : %d | c : %d \n",a_afficher->a,a_afficher->b,a_afficher->c);}

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

void detruire_structure(T_var tableau) {
	free(tableau);
	printf("la destruction est reussite \n");
}

void afficher_var_int(T_var _val) {
    int *a_afficher = (int*)_val;
    printf("%d \n",*a_afficher);
}

void* aleatoire_int() {
	int inf = 1 , sup = 9 ;
    int number ;
	number = ( rand() % (sup - inf + 1)) + inf;
    int *ptr = (int*)malloc(sizeof(int));
    memcpy(ptr,&number,sizeof(int));
    return ptr;
}

void detruire_int(T_var tableau) {
	free(tableau);
	printf("la destruction est reussite \n");
}

//void* push_int(int item){
//	int element = item;
//	int *ptr = (int*)malloc(sizeof(int));
//    memcpy(ptr,&element,sizeof(int));
//    return ptr;
//}
//
//void* push_structure(Test item){
//	Test element;
//	element.a = item.a;
//	element.b = item.b;
//	element.c = item.c;
//	Test *ptr = (int*)malloc(sizeof(Test));
//    memcpy(ptr,&element,sizeof(Test));
//    return ptr;
//}	

int main() {
	
    srand(time(NULL));

    T_var tableau = aleatoire_var(10, sizeof(int), &afficher_var_int, &aleatoire_int, &detruire_int);
    T_var tableau_1 = aleatoire_var(10, sizeof(struct test), &afficher_var_structure, &aleatoire_structure, &detruire_structure);

    afficher_var(tableau, 10); // affichage de tableau
    afficher_var(tableau_1, 10); // affichage de tableau_1

    int a = 8473843;
    push(tableau, a, sizeof(int)); 

	//afficher_var(tableau, 11); // affichage de tableau
//
//    pop(/* A COMPLETER */); // suppression du dernier élément de tableau
//    pop(/* A COMPLETER */); // suppression du dernier élément de tableau
//    pop(/* A COMPLETER */); // suppression du dernier élément de tableau_1
//    pop(/* A COMPLETER */); // suppression du dernier élément de tableau_1

    detruire_tout(tableau); // destruction de tableau
    detruire_tout(tableau_1); // destruction de tableau_1

    return EXIT_SUCCESS;
}
