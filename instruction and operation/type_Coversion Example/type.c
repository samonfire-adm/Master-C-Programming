#include<stdio.h>

int main(){
    // Implicit Type Conversion 
    int number = 5;
    float result = number+6.3;
   // Explicit Type Conversion 
    float num =5.5;
    int num1 = (int)num;

    printf("%d \n", num1);
    printf("%f",result);
    return 0;
}