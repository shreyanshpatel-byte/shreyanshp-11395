#include <stdio.h>

// Function to print even numbers up to n
void printEvenNumbers(int n) {
    if (n < 2) {
        printf("There are no even numbers up to %d.\n", n);
        return;
    }

    printf("Even numbers up to %d are:\n", n);

    // Start from 2 and increment by 2 in each step
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printEvenNumbers(N);

    return 0;
}