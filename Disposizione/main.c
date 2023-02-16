#include <stdio.h>

int fattoriale(int N);
int disposizione(int N, int K);

int main()
{
    int n;
    int k;
    int ft;
    printf("Inserisci Dato ");
    scanf("%d",&n);
    printf("Inserisci un altro Dato ");
    scanf("%d",&k);


    printf("Il fattoriale di %d è %d", n , fattoriale(n));

    printf("\n\nIl risultato e' %d", disposizione(n, k));

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
int disposizione(int N, int K){
    int diff = N - K;
    int d = N - diff;
    int dis = 1;

    for (int i = d; i > 0; i--){
        dis *= (N - (i - 1));
    }
    return dis;
}
