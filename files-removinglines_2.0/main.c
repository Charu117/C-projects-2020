#include "libraryFiles.h"

int main(){
    int count;

    printf("Quante stringhe vuoi inserire? => ");
    scanf("%d", &count);

    write_file_from_input(count);

    printf("Per cancellare una riga, inseire 1, per uscire, inserisci 0... \nInserire il numero della tua richiesta: ");
    scanf("%d", &count);

    if (count == 1)
        newTempFile();
    else if (count == 0)
        return 0;
    else printf("Richiesta non conosciuta");


    return 0;
}
