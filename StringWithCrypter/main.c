#include <stdio.h>
#define dime 25
void criptor(char vettore[], int dim);
void lower(char vettore[], int dim);

int main()
{
   //int v[3];
   //int a = sizeof(v);
   //printf("Il size è %d", a);
   
   char nome[dime] = "";
   int size = 25;
   
    printf("Inserisci il tuo nome in maiuscolo: ");
    scanf("%s", nome);
    //printf("Ciao, Benvenuto %s!", nome);
   
    criptor(nome, size);
    lower(nome, size);
    
    return 0;
}

void criptor(char vettore[], int dim){
    
    for(int i = 0; i < dim  && vettore[i] != '\0'; ++i){
        if (vettore[i] == 'z')
            vettore[i] = 'a';
        else if (vettore[i] == 'Z')
                vettore[i] = 'A';
        else vettore[i]++;
         
    }
    printf("Il nome criptato: %s", vettore);
}
void lower(char vettore[], int dim){
    for(int i = 0; i < dim  && vettore[i] != '\0'; ++i){
       vettore[i] += 32;
    }
    printf("\nIl nome criptato in maiuscolo: %s", vettore);
}



