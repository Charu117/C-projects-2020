#include <stdio.h>

int main() {
    int arr[8];
    int countOdd = 0;
    int countEven = 0;
    
    printf("Inserire 8 numeri\n");
    for (int i = 0; i < 8; i++){
        printf("Inserire un numero: ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <8; i++){
        if (arr[i] % 2)
            countOdd++;
        else countEven++;
    }
    printf("\nI numeri dispari: %d\n", countOdd);
    printf("I numeri pari: %d", countEven);

    return 0;
}


