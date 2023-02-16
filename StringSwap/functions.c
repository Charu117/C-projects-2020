#include "libStr.h"
#include <string.h>
#include <stdio.h>

void swap(char str1[], char str2[]){
    char appoggio[25];
    
    strcpy(appoggio, str1);
    strcpy(str1,str2);
    strcpy(str2,appoggio);
    printf("%s\n%s", str1, str2);
}