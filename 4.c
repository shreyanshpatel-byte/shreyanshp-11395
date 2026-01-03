#include <stdio.h>

// Function to print all numbers from 1 to n
void printAll(int n) {
    printf("Numbers from 1 to %d: ", n);
    for (int i = 1; i <= n; i++) printf("%d ", i);
    printf("\n");
}

// Function to print even numbers up to n
void printEven(int n) {
    printf("Even numbers up to %d: ", n);
    for (int i = 2; i <= n; i += 2) printf("%d ", i);
    printf("\n");
}

// Function to print odd numbers up to n
void printOdd(int n) {
    printf("Odd numbers up to %d: ", n);
    for (int i = 1; i <= n; i += 2) printf("%d ", i);
    printf("\n");
}

int main() {
    int choice, N;

    do {
        // Displaying the Menu
        printf("\n--- Number Generator Menu ---\n");
        printf("1. Print all numbers up to N\n");
        printf("2. Print even numbers up to N\n");
        printf("3. Print odd numbers up to N\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Process choice
        if (choice >= 1 && choice <= 3) {
            printf("Enter the value of N: ");
            scanf("%d", &N);
        }

        switch (choice) {
            case 1: printAll(N); break;
            case 2: printEven(N); break;
            case 3: printOdd(N); break;
            case 4: printf("Exiting program. Goodbye!\n"); break;
            default: printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4); // Loop continues until user chooses Exit

    return 0;
}