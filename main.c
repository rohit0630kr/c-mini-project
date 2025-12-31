#include <stdio.h>

int main() {
    float balance = 5000.00;
    float amount;
    
    printf("Welcome to the ATM.\n");
    printf("Current Balance: %.2f\n", balance);
    printf("Enter withdrawal amount: ");

    scanf("%f", &amount);

    if (amount > 0) {
        if (amount <= balance) {
            balance = balance - amount;

            printf("Withdrawal successful!\n");
            printf("Updated Balance: %.2f\n", balance);
        } else {
            printf("Error: Insufficient balance.\n");
        }
    } else {
        printf("Error: Invalid amount. Please enter a positive value.\n");
    }

    return 0;
}
