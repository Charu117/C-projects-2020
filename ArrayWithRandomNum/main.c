#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define dim 10

int main() {
    const int dime = 10;
    int arr[dim]; 
    int countOdd = 0;
    int countEven = 0;
    int segno;

    srand(time(NULL));

    for (int i = 0; i <dim; i++){
        arr[i] = rand() % 100;
        
        if (rand()%2) segno = 1;
        else segno = -1;
        
        arr[i] *= segno; 
        
    }
    printf("I numeri generati sono: ");
    for (int i = 0; i < dim; i++) {
        printf("%d ", arr[i]);
        if (arr[i] % 2)
            countOdd++;
        else countEven++;
    }
    printf("\nI numeri dispari: %d\n", countOdd);
    printf("I numeri pari: %d", countEven);
    
    return 0;
}



