#include <stdio.h>

int convertiDecimal_1(int index, int n);
int convertiDecimal_2(int index, int n);
int main()
{
    int quantity;
    int binaryNum;
    int results;
    int sum = 0;
    int i = 1;
    printf("\tInserire quanti numeri ci sono nel codice binario(mettere 4 o 8): ");
    scanf("%d",&quantity);
    
    printf("\tInserire i numeri del codice binario uno per volta: \n");
    
    if (quantity == 4){
        while(i <= 4){
            printf("\til %d° numero: ", i);
            scanf("%d", &binaryNum);
            if (binaryNum == 0 || binaryNum == 1){
                results = convertiDecimal_1(i, binaryNum);
                sum += results;
                i++;
            }
            else printf("\tERROR [Il numero inserito non corrisponde]\n");
             
        }
        printf("\tIl numero decimale corrispondente al numero binari e' %d", sum);
    }
    else if(quantity == 8){
        while(i <= 8){
            printf("\til %d° numero: ", i);
            scanf("%d", &binaryNum);
            results = convertiDecimal_2(i, binaryNum);
            sum += results;
            
            i++; 
        }
        printf("%d", sum);
    }
    
    return 0;
}

int convertiDecimal_1(int index, int n)
{
    switch (index){
        case 1:
            n = n * 8;
            break;
        
        case 2:
            n = n * 4;
            break;
        
        case 3:
            n = n * 2;
            break;
        
        case 4:
            n = n * 1;
            break;

    }
    
    return n;
}
int convertiDecimal_2(int index, int n)
{
    switch (index){
        case 1:
            n = n * 128;
            break;
        
        case 2:
            n = n * 64;
            break;
        
        case 3:
            n = n * 32;
            break;
        
        case 4:
            n = n * 16;
            break;
        case 5:
            n = n * 8;
            break;
        
        case 6:
            n = n * 4;
            break;
        
        case 7:
            n = n * 2;
            break;
        
        case 8:
            n = n * 1;
            break;
    }
    return n;
}


