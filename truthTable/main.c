/******************************************************************************
Truth table
*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool x;
    bool y = 0;
    bool z;
    bool w;
    
    printf("\tx\ty\tz\t!((x||y)&& z &&(y || z))\n");
    for (int i = 0; i<2; i++){
        x = i; //nel primo giro di for i = 0 e quindi x = 0
        for (int j = 0; j<4; j++){
            if (j%2){
                for(int k = 0; k<2; k++){
                    z = k;
                    w = !((x||y)&& z &&(y || z));
                    printf("\t%i\t%i\t%i\t\t%i\n", x, y, z, w);
                }
                y = !y;// (y = 0) con !y sarà uguale a 1
            }
        }
    }

    return 0;
}
