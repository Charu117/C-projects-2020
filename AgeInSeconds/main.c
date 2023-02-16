#include <stdio.h>


int main()
{
    int birthY, birthMon, birthday;
    int cuYear, cuMonth, cuDay;
    int tot;
    
    printf("Inserire il tuo compleanno\nAnno di nascita: ");
    scanf("%d", &birthY);
    
    printf("Mese(es.1 ; 2): ");
    scanf("%d", &birthMon);
    
    printf("giorno: ");
    scanf("%d", &birthday);
    
    printf("\nInserire la data di oggi\nAnno: ");
    scanf("%d", &cuYear);
    
    printf("Mese(es. 1,2): ");
    scanf("%d", &cuMonth);
    
    printf("giorno: ");
    scanf("%d", &cuDay);
    
    
    birthY = cuYear - birthY;
    birthMon = cuMonth - birthMon;
    birthday = cuDay - birthday;
    
    
    if (birthMon <= 0) {
        printf("La tua età e' quasi %d anni", birthY);
    }
    else{
        if (birthday<=0){
            printf("La tua età e' %d anni %d mesi", birthY, birthMon);
        }
        else{
            printf("La tua età e' %d anni %d mesi %d giorni", birthY, birthMon, birthday);
        }
    }
    
    birthY = birthY * 365 * 24 * 3600;
    birthMon = birthMon * 30 * 24* 3600;
    birthday = birthday * 24 * 3600;
    tot = anno + mese + giorni;
    
    printf("\nLa tua età in secondi %d",tot);

    return 0;
}




