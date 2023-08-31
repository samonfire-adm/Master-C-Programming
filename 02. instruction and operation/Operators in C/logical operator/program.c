#include<stdio.h>
void main(){
    int score;
    printf("Enter your Score \n");
    scanf("%d",&score);
    if (score >= 60 && score <= 100) {
    printf("You passed the exam.\n");
}
}