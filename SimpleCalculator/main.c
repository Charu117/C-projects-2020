/*****************************************************************
 * Calcolatrice
 ****************************************************************/
#include <stdio.h>
#include <string.h>

float addition(float a, float b);
float substraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);

float value1,value2;

int main()
{
    
    char operatore[1];
        printf("Inserire il primo operando:\t");
        scanf("%f", &value1);
        
        printf("I segni(+,-,*,/)\nIndicare il segno dell'operazione : ");
        scanf("%s",operatore);
        
        printf("Inserire il secondo operando:\t");
        scanf("%f", &value2);
        
        if (strcmp(operatore, "+") == 0){
            printf("La somma di due operandi e' %0.f", addition(value1,value2));
        }
        else if  (strcmp(operatore, "-") == 0){
                printf("La differenza fra due operandi e' %0.f", substraction(value1,value2));
            }
            else if  (strcmp(operatore, "*") == 0){
                    printf("La motiplicazione di due operandi e' %0.f", multiplication(value1,value2));
                }
                else if (strcmp(operatore, "/") == 0){
                        printf("La divisione e' %0.2f", division(value1,value2));
                    }
                else{
                    printf("Error\nHai inserito un'operazione non esistente");
                }
    
    return 0;
}
float addition(float a, float b){
    return a + b; 
}
float substraction(float a, float b){
    return a - b;
}
float multiplication(float a, float b){
    return a * b;
}
float division(float a, float b){
    return a / b; 
}




