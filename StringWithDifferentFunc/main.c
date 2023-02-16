#include <stdio.h>
#include <stdlib.h>
#include "lib.h"


int main() {
    int selection, condition;

    do {
        printf("\033c");
        printf("\n\nInserisci il numero corrispondente dell'operazione che vuoi effettuare\n1. Trasformazione delle stringhe\n2. Calcolare la lunghezza di una stringa\n"
               "3. Contare i caratteri\n4. Contare i vocali\n5. Invertire una parola\n6. Paragonare la lunghezza di due stringhe\n7. Decimale a Binario Convertor\n"
               "Per uscire inserire 0\n\nInserisci il numero della richesta: ");
        scanf("%d", &selection);
        menu(selection);

        printf("\n\nPer continuare 1\nPer terminare 0 -> ");
        scanf("%d", &condition);

    } while (condition);

    return 0;
}
