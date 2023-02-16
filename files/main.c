#include "lib.h"

int main() {
    int num;
    int cond;

    printf("Quante stringhe vuoi inserire? => ");
    scanf("%d", &num);

    up_file(num);

    printf("Per cancellare una riga, inseire 1, per uscire, inserisci 0... \nInserire il numero della tua richiesta: ");
    scanf("%d", &cond);

    if (cond == 1)
        removeLine();
    else if (cond == 0)
        return 0;
    else printf("Richiesta non conosciuta");


   return 0;
}
