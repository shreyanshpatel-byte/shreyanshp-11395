#include <stdio.h>

// --- Function Definitions ---

void printAll(int n) {
    printf("Result: ");
    for (int i = 1; i <= n; i++) printf("%d ", i);
    printf("\n");
}

void printEven(int n) {
    printf("Result: ");
    for (int i = 2; i <= n; i += 2) printf("%d ", i);
    printf("\n");
}

void printOdd(int n) {
    printf("Result: ");
    for (int i = 1; i <= n; i += 2) printf("%d ", i);
    printf("\n");
}

// --- Main Function ---

int main() {
    int choice, N;

    do {
        // Display Menu
        printf("\n--- SELECT AN OPTION ---\n");
        printf("1. Print Numbers 1 to N\n");
        printf("2. Print Even Numbers up to N\n");
        printf("3. Print Odd Numbers up to N\n");
        printf("4. Exit Program\n");
        
        printf("Enter choice (1-4): ");
        scanf("%d", &choice);

        // If user wants to print, ask for N first
        if (choice >= 1 && choice <= 3) {
            printf("Enter value for N: ");
            scanf("%d", &N);
        }

        // Switch-Case logic to match the user's choice
        switch (choice) {
            case 1:
                printAll(N);
                break;
            case 2:
                printEven(N);
                break;
            case 3:
                printOdd(N);
                break;
            case 4:
                printf("Exiting... Goodbye!\n");
                break;
            default:
                printf("Error: '%d' is not a valid option.\n", choice);
        }

    } while (choice != 4);

    return 0;
}