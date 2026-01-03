#include <stdio.h>

// --- Function to print numbers 1 to N ---
void printAll(int n) {
    printf(">> Result: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

// --- Function to print Even numbers up to N ---
void printEven(int n) {
    printf(">> Result: ");
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

// --- Function to print Odd numbers up to N ---
void printOdd(int n) {
    printf(">> Result: ");
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int choice, N;

    do {
        // Displaying the Menu
        printf("\n--- MATH UTILITY MENU ---\n");
        printf("1. Print Numbers 1 to N\n");
        printf("2. Print Even Numbers up to N\n");
        printf("3. Print Odd Numbers up to N\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Input validation and gathering N
        if (choice >= 1 && choice <= 3) {
            printf("Enter the value of N: ");
            scanf("%d", &N);
            
            if (N < 1) {
                printf("Error: Please enter a positive number.\n");
                continue; // Skip back to the start of the loop
            }
        }

        // Switch-Case to call the corresponding function
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
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}