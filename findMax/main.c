/**********************************************************************************
Funzioni
***********************************************************************************/
#include <stdio.h>

int max(int p1, int p2); // prototipo della funzione max
// I parametri dichiarati dentro il prototipo si chiamano parametri formali.
// I parametri dichiarati dentro la chiamata si chiamano parametri attuali.

int main()
{
    int valore1;
    int valore2;
    int valMax;
    
    printf("Inserire i valori da verificare: ");
    scanf("%d", &valore1);
    scanf("%d", &valore2);
    
    valMax = max(valore1, valore2); // Chiamata dela funzione max alla quale passo due paramentri attuali(valore1 e valore2)
    
    if (valMax != 0)
        printf("Il valore max e' %d", valMax);
    else printf("I due valori sono uguali");
    
    return 0;
}

int max(int p1, int p2) // Definizione della funzione max(Protoipo + Corpo)
    {
        if (p1>p2){
            //printf("Il valore massimo e' %d", p1);
            return p1;
        }
        else if (p1 == p2){
           return 0;
        }
           
        else return p2;
        
        return 0;
    }
