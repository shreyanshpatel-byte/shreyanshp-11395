#include <stdio.h>

// Function prototypes
void printAll(int n);
void printEven(int n);
void printOdd(int n);

int main() {
    int choice; // Variable to store the user's menu selection
    int N;      // Variable to store the limit for printing

    do {
        // 1. Display Menu
        printf("\n--- MENU ---\n");
        printf("1. All Numbers\n2. Even Numbers\n3. Odd Numbers\n4. Exit\n");
        
        // 2. Ask and Store choice
        printf("Enter choice: ");
        scanf("%d", &choice); // Choice is stored in the memory address of 'choice'

        // 3. Conditional Input for N
        if (choice >= 1 && choice <= 3) {
            printf("Enter the value for N: ");
            scanf("%d", &N); // N is stored here
        }

        // 4. Branching based on the stored variable
        switch (choice) {
            case 1: printAll(N); break;
            case 2: printEven(N); break;
            case 3: printOdd(N); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice, try again.\n");
        }
    } while (choice != 4);

    return 0;
}

// Function definitions
void printAll(int n) { for(int i=1; i<=n; i++) printf("%d ", i); printf("\n"); }
void printEven(int n) { for(int i=2; i<=n; i+=2) printf("%d ", i); printf("\n"); }
void printOdd(int n) { for(int i=1; i<=n; i+=2) printf("%d ", i); printf("\n"); }