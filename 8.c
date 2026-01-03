#include <stdio.h>

// --- 1. Define the Functions ---

void printAll(int n) {
    printf(">> Numbers 1 to %d: ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void printEven(int n) {
    printf(">> Even numbers up to %d: ", n);
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

void printOdd(int n) {
    printf(">> Odd numbers up to %d: ", n);
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

// --- 2. Main Menu and Function Calling ---

int main() {
    int choice, N;

    do {
        printf("\n--- MATH UTILITY MENU ---\n");
        printf("1. Print 1 to N\n");
        printf("2. Print Even numbers\n");
        printf("3. Print Odd numbers\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // If a valid math option is picked, get the limit N
        if (choice >= 1 && choice <= 3) {
            printf("Enter the value of N: ");
            scanf("%d", &N);
        }

        // --- 3. Call functions based on selection ---
        switch (choice) {
            case 1:
                printAll(N); // Calls the 'all' function
                break;
            case 2:
                printEven(N); // Calls the 'even' function
                break;
            case 3:
                printOdd(N); // Calls the 'odd' function
                break;
            case 4:
                printf("Program terminated.\n");
                break;
            default:
                printf("Invalid selection! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
