#include <stdio.h>

int fattoriale(int);

int main()
{
    int n; 
    printf("Inserire N: ");
    scanf("%d", &n);
    
    printf("Il fattoriale di %d è %d", n , fattoriale(n));

    return 0;
}

int fattoriale(int N){
    int i; 
    int fatt = 1;
    
    for (i = N; i>1; i--){
        fatt *= i;
    }
    return fatt;
}



