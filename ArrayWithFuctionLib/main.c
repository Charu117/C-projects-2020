#include "lib.h"
#include <stdio.h>
#include <math.h>
#include <string.h>
#define size 25

int countMin(char arr[]){
    int tot = 0;
    
    for(int i = strlen(arr); i > 0; i--){
        if (arr[i] >= 'a' && arr[i] <= 'z')
            tot++;
    }
    return tot;
}

int main() {
    char v1[size];
    char v2[size];
    int count;
    float avgV1, avgV2;

    fillArray(v1,size);
    //printArrayInt(v1, size, "Array V1");
    
    printf("%s", v1);
    
    count = countMin(v1);
    
    printf("\n%d", count);
    /*
    avgV1 = average(v1, size);
    printf("\nla media di V1 e' %.2f\n", avgV1);

    fillArray2(avgV1, v1 , v2 , size);
    printArrayInt(v2, size, "Array V2");

    avgV2 = average(v2, size);
    printf("\nla media di V2 e' %.2f", avgV2);

    printf("\nIl Massimo dell'Array V2 e' %d",findMax(v2, size));
    printf("\nIl Minimo dell'Array V2 e' %d",findMin(v2, size));

    printf("\nLa radice quadrata della media di V2: %.2f", sqrtf(avgV2));
    */

    return 0;
}
