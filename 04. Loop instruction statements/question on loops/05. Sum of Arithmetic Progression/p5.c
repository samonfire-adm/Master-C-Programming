#include <stdio.h>
int main() {
    int n, i;
    float sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += 2 * i;
    }
    printf("Sum of the first %d terms: %.2f", n, sum);
    return 0;
}
