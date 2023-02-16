#include "libraryOperators.h"

int main() {
    float result;
    float value1, value2;

    printf("Inserire il primo valore: ");
    scanf("%f", &value1);

    printf("Inserire il secondo valore: ");
    scanf("%f", &value2);

    addition(&result, value1, value2);
    printf("La somma di due valori e' %.f\n", result);

    substraction(&result, value1, value2);
    printf("La sottrazione di due valori e' %.f\n", result);

    multiplication(&result, value1, value2);
    printf("La moltiplicazione di due valori e' %.f\n", result);

    division(&result, value1, value2);
    printf("La divisione di due valori e' %.2f\n", result);


    return 0;
}
