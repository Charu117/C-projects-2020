#include "prototypes.h"

int main()
{
    srand(time(NULL));
    int v[MAX];
    int i, j, min, temp, avg, num, position;
    int confronts = 0;
    int scambi = 0;
    carica(v, MAX);
    stampa(v, MAX);

    for(i = 0; i < MAX - 1; i++){
        min = i;

        for (j = i + 1; j < MAX; j++){
            if(v[j] < v[min]){
                confronts++;
                min = j;
            }
        }

        temp = v[min];
        v[min] = v[i];
        v[i] = temp;
        scambi++;

    }

    stampa(v, MAX);

    printf("\nInseisci un numero da cercare: ");
    scanf("%d", &num);

    position = ricercaBinaria(v, MAX, num);

    if (position != -1)
        printf("\nElemento si tova nella posizione: %d", position);
    else
        printf("\nELEMENTO NON TROVATO");

    avg = average(v,MAX);
    printf("\nLa media dei valori: %d\n", avg);

    newFillArray(v, MAX, avg);

    stampa(v, MAX);
    printf("\nConfronti: %d", confronts);

    printf("\nScambi: %d\n", scambi);

    return 0;
}

