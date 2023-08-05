#include<stdio.h>
int main(){
    int a,b;
    printf("Enter The Number 1 \n");
    scanf("%d",&a);
    printf("Enter The Number 2 \n");
    scanf("%d",&b);
    int sum = a+b;
    int subtract = a-b;
    int multiply = a*b;
    int divide = a/b;
    
    
    printf("Numbers are %d and %d \n",a,b);
    printf("Addition of two numbers are %d \n",sum);
    printf("Subtraction of 2 numbers %d \n",subtract);
    printf("multiplication of 2 numbers %d \n",multiply);
    printf("Division of 2 numbers %d \n",divide);
}