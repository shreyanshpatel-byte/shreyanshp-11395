#include <stdio.h>

/* * Function Prototypes 
 * Declaring these at the top allows main() to know they exist.
 */
void printNumbers();
void printEven();
void printOdd();

int main() {
    int choice;

    // Step 4: Display a menu with options
    printf("------------------------------------------\n");
    printf("   MENU-DRIVEN NUMBER OPERATIONS PROGRAM   \n");
    printf("------------------------------------------\n");
    printf("1. Print numbers from 1 to N\n");
    printf("2. Print even numbers up to N\n");
    printf("3. Print odd numbers up to N\n");
    printf("4. Exit\n");
    printf("------------------------------------------\n");

    // Step 5: Ask the user to enter their choice
    printf("Enter your choice (1-4): ");
    
    // Step 6: Store the user's choice in a variable
    scanf("%d", &choice);

    // Step 7: Use a switch-case to match the user's choice
    switch(choice) {
        // Step 8: Call the corresponding function based on the option
        case 1:
            printNumbers();
            break;
            
        case 2:
            printEven();
            break;
            
        case 3:
            printOdd();
            break;
            
        case 4:
            printf("Exiting the program. Goodbye!\n");
            break;
            
        default:
            printf("Invalid choice! Please restart and select 1-4.\n");
    }

    // Step 10: End the program
    return 0;
}

/* --- Function Definitions --- */

// Step 1: Function to print numbers from 1 to N
void printNumbers() {
    int n, i;
    // Asking for input inside the function as per "all logic is inside functions" note
    printf("Enter the value of N: "); 
    scanf("%d", &n);

    printf("Numbers from 1 to %d are: \n", n);
    // Step 9: Use a loop to perform the task
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

// Step 2: Function to print even numbers up to N
void printEven() {
    int n, i;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Even numbers up to %d are: \n", n);
    // Step 9: Use a loop with logic
    for(i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Step 3: Function to print odd numbers up to N
void printOdd() {
    int n, i;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Odd numbers up to %d are: \n", n);
    // Step 9: Use a loop with logic
    for(i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}