#include <stdio.h>

void scambia(int *v1, int *v2);

int main()
{
    int a = 5;
    int b = 7;
    
    scambia(&a, &b);
    
    printf("%d\n%d", a , b);

    return 0;
}

void scambia(int *v1, int *v2){
    int temp;
    temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}
