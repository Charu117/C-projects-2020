#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   
    int val, i;
    srand(time(NULL));
    i=5;
    while(i>0)
    {
        val=rand()%100;
        if (rand()%2) printf("\nValore %d", val*(-1));
        else printf("\nValore %d", val);
        i--;
    }
    printf("\nHello World");

    return 0;
}
