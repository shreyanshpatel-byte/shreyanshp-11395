#include <stdio.h>

// --- Function to print numbers 1 to N ---
void printAll(int n) {
    printf(">> Numbers 1 to %d: ", n);
    for (int i = 1; i <= n; i++) printf("%d ", i);
    printf("\n");
}

// --- Function to print Even numbers up to N ---
void printEven(int n) {
    printf(">> Even numbers up to %d: ", n);
    for (int i = 2; i <= n; i += 2) printf("%d ", i);
    printf("\n");
}

// --- Function to print Odd numbers up to N ---
void printOdd(int n) {
    printf(">> Odd numbers up to %d: ", n);
    for (int i = 1; i <= n; i += 2) printf("%d ", i);
    printf("\n");
}

int main() {
    int choice, N;

    // 1. Display Menu
    printf("--- MENU ---\n");
    printf("1. Print Numbers 1 to N\n");
    printf("2. Print Even Numbers up to N\n");
    printf("3. Print Odd Numbers up to N\n");
    printf("Enter choice: ");
    
    // 2. Store the choice
    scanf("%d", &choice);

    // 3. Ask for N and call the function using Switch-Case
    if (choice >= 1 && choice <= 3) {
        printf("Enter the value of N: ");
        scanf("%d", &N);

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
        }
    } else {
        printf("Invalid choice.\n");
    }

    // 4. End the program
    printf("Task complete. Exiting program...\n");
    return 0;
}