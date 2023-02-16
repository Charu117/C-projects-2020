#include "libraryOperators.h"

void addition(float *sum, float a, float b){
    *sum = a + b;
}
void substraction(float *subParam, float a, float b){
    *subParam = a - b;
}
void multiplication(float *mulParam, float a, float b){
    *mulParam = a * b;
}
void division(float *divParam, float a, float b){
    *divParam = a / b;
}