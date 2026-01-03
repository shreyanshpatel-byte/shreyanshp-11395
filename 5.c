#include <stdio.h>

// Functions for printing (same as before)
void printAll(int n) { for(int i=1; i<=n; i++) printf("%d ", i); printf("\n"); }
void printEven(int n) { for(int i=2; i<=n; i+=2) printf("%d ", i); printf("\n"); }
void printOdd(int n) { for(int i=1; i<=n; i+=2) printf("%d ", i); printf("\n"); }

int main() {
    int choice, N;

    do {
        printf("\nSelect an option (1-4): ");
        scanf("%d", &choice); // The user enters their choice here

        if (choice >= 1 && choice <= 3) {
            printf("Enter N: ");
            scanf("%d", &N); // Only ask for N if a printing option was chosen
        }

        switch (choice) {
            case 1: printAll(N); break;
            case 2: printEven(N); break;
            case 3: printOdd(N); break;
            case 4: printf("Goodbye!\n"); break;
            default: printf("Invalid option. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}