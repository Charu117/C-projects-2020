/******************************************************************************
Funzioni
*******************************************************************************/
#include <stdio.h>

void menu(); // prototipo della funzione menu
int menu1(); // prototipo della funzione menu


int main()
{
    int sceltaUtente;
    sceltaUtente = menu1();
    printf("La scelta che hai effettuato e' %d\n", sceltaUtente);
    
    return 0;
}
void menu()// Definizione della funzione menu (prototipo + Corpo) 
    {
        printf("\n Scelta 1 (1)");
        printf("\n Scelta 2 (2)");
        printf("\n Fare una scelta: ");
    }
int menu1() // Definizione della funzione menu1()
{
    int scelta;
    menu();
    scanf("%d", &scelta);
    return scelta;
}