#include <stdio.h>

int main()
{
    int anni,gg,ore,min,sec; //Dichiarazione delle variabili per anni, giorni, ore, minuti e secondi
    
    printf("Inserire gli anni, i giorni,le ore e minuti a piacere per trasformare in secondi");
    printf("\n-->gli anni: ");
    scanf("%d", &anni);//Acquisisce il valore inserito 
    printf("-->i giorni: ");
    scanf("%d", &gg);
    printf("-->le ore: ");
    scanf("%d", &ore);
    printf("-->i minuti: ");
    scanf("%d", &min);
    
    gg = gg + (anni*365);//La trasformazione degli anni in giorni
    ore = ore + (gg*24);//La trasformazione dei giorni in ore
    min = min + (ore * 60); //La trasformazione delle ore in minuti
    sec = (min * 60);//Alla fine i minuti vengono trasformati in secondi.
    
    printf("Il totale di secondi: %d", sec);//Stampa la quantita' di secondi che contiene i valori che abbiamo inserito
    
    return 0;
}


