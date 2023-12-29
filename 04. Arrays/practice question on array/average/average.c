#include <stdio.h>
// #include <string.h>

float calculateAverage(float arr[], int n) {
    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

int main() {
    float arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]) ;
    // int n = strlen(arr);
    printf("%d\n", n);
    
    float average = calculateAverage(arr, n);
    
    printf("Average of elements in the array: %.2f\n", average);
    
    return 0;
}