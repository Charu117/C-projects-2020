#include "lib.h"
#define DIM 10

int main() {
    srand(time(NULL));
    int vet[DIM];

    fiilArray(vet, DIM);
    printf("L'array caricato casualmente: ");
    printArray(vet, DIM);

    bubble_sort(vet, DIM);
    printf("\nL'array oradinato con BUBBLE SORT: ");
    printArray(vet, DIM);


    return 0;
}