#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n,s, somma;
    somma = 0;
    
    srand(time(NULL));
    printf("Quanti numeri vuoi? ");
    scanf("%d",&s);
    
    while (s>0){
        n = rand()%100;
        if (n>10 && n<90){
            somma = somma + n;
            printf("\nil numero %d è composto fra 10 e 90", n);
        }
        else {
            printf("\nil numero %d non è composto fra 20 e 40", n);
        }
        s--;
    }
    printf("\nla somma totale è %d", somma);
    return 0;
}




