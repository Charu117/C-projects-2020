#include <stdio.h>
#include <string.h>
#include "libStr.h"
#define dim 25

int main()
{
    char firstStr[dim] = "abcd";
    char secondStr[dim] = "abcc";
    char appoggio[dim];
    
    if (strcmp(firstStr,secondStr) < 0)
        printf("%s\n%s", firstStr, secondStr);
    else { //scambia le stringhe
        /*strcpy(appoggio, firstStr);
        strcpy(firstStr,secondStr);
        strcpy(secondStr,appoggio);*/
        swap(firstStr, secondStr);
        //printf("%s\n%s", firstStr, secondStr);
    }
    
    
    /*if (strcmp(firstStr,secondStr) < 0)
        printf("%s precede %s", firstStr, secondStr);
    else printf("%s segue %s", firstStr, secondStr);*/
    
    /*if (strcmp(firstStr,secondStr) < 0)
        printf("Il valore %d", strcmp(firstStr,secondStr));
    else if (strcmp(firstStr,secondStr) > 0)
        printf("Il valore %d", strcmp(firstStr,secondStr));
    else if (strcmp(firstStr,secondStr) == 0)
        printf("Il valore %d", strcmp(firstStr,secondStr));*/

    return 0;
}
