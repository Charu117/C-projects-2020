#include <stdio.h>

int CapToSimp(int num);
int main()
{
    for (int i = 65; i < 91; i++){
        printf("%c --> %c\n", i, CapToSimp(i));
    }

    return 0;
}
int CapToSimp(int num){
    return num += 32;
}
