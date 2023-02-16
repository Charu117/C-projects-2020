#include "lib.h"

int length(char string[], int dim){
    
    int len = 0;
    for(int i = 0; i < dim && string[i] != '\0'; ++i)
        len++;
        
    return len;
}