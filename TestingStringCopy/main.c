#include <stdio.h>
#include <string.h>
#include "lib.h"


int main()
{
    char firstStr[25];
    char secondStr[25];
    char extraStr[25]; // stringa da appoggio 
    int dime = 25;
    int size; 
    
    printf("Inserire la prima stringa: ");
    scanf("%s", firstStr);
    
    printf("Inserire la seconda stringa: ");
    scanf("%s", secondStr);
    
    printf("\n%s", firstStr);
    printf("\n%s", secondStr);
    
    printf("\nDopo lo scambio con 'strcpy()'\n");
    
    strcpy(extraStr, firstStr);
    strcpy(firstStr, secondStr);
    strcpy(secondStr, extraStr);
    
    printf("\n\n%s", firstStr);
    printf("\n%s", secondStr);
    
    //size = strlen(secondStr);
    size = length(secondStr, dime);
    
    printf("\nLa lunghezza della parola %s e' %d", secondStr, size);
    
    size = length(firstStr, dime);
    printf("\nLa lunghezza della stringa %s e' %d", firstStr, size);
    

    return 0;
}

