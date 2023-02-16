#include "lib.h"
#define MAX 20
#define RIGA 5

int main() {
srand(time(NULL));
    int pos;
    char str[20];
    char elenco[RIGA][MAX];

    fillList(elenco, RIGA);
    printf("L'elenco: \n");
    stampa(elenco, RIGA);

    printf("\n\nL'elenco ordinato con bubble sort: \n");

    bubbleSort(elenco, RIGA);
    stampa(elenco, RIGA);
    
    printf("\nInserisci la stringa da trovare: ");
    scanf("%s", str);
    pos = ricercaBinaria(elenco, RIGA, str);


    (pos != FALSE) ? printf("\nElemento si tova nella posizione: %d\n", (++pos))
                   : printf("\nELEMENTO NON TROVATO\n");



    return 0;
}