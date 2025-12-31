#include <stdio.h>

int main() {
    // Step 1: Declare a variable for balance and give it an initial value.
    float balance = 5000.00;
    float amount;

    // Step 2: Ask the user to enter the withdrawal amount.
    printf("Welcome to the ATM.\n");
    printf("Current Balance: %.2f\n", balance);
    printf("Enter withdrawal amount: ");

    // Step 3: Take the withdrawal amount as input using scanf.
    scanf("%f", &amount);

    // Step 4: Check if the entered amount is greater than zero.
    if (amount > 0) {
        // Step 5: Inside this check, use another if to compare the amount with the balance.
        if (amount <= balance) {
            // Step 6: If the amount is less than or equal to the balance, allow the withdrawal.
            // Step 7: Subtract the withdrawal amount from the balance.
            balance = balance - amount;

            // Step 8: Print the updated balance on the screen.
            printf("Withdrawal successful!\n");
            printf("Updated Balance: %.2f\n", balance);
        } else {
            // Step 9: If the amount is more than the balance, show an insufficient balance message.
            printf("Error: Insufficient balance.\n");
        }
    } else {
        // Step 10: If the amount is not positive, show an invalid amount message.
        printf("Error: Invalid amount. Please enter a positive value.\n");
    }

    return 0;
}
