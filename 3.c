#include <stdio.h>

// Function to print odd numbers up to n
void printOddNumbers(int n) {
    if (n < 1) {
        printf("There are no odd numbers up to %d.\n", n);
        return;
    }

    printf("Odd numbers up to %d are:\n", n);

    // Start from 1 and increment by 2 to stay on odd numbers
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printOddNumbers(N);

    return 0;
}