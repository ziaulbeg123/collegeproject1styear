#include <stdio.h>

double balance = 1000; // Initial balance

void checkBalance() {
    printf("Your current balance is: $%.2f\n", balance);
}

void withdrawMoney() {
    double amount;
    printf("Enter the amount to withdraw: ");
    scanf("%lf", &amount);

    if (amount > balance) {
        printf("Insufficient balance.\n");
    } else {
        balance -= amount;
        printf("Withdrawal successful. Remaining balance: $%.2f\n", balance);
    }
}

void depositMoney() {
    double amount;
    printf("Enter the amount to deposit: ");
    scanf("%lf", &amount);

    balance += amount;
    printf("Deposit successful. Current balance: $%.2f\n", balance);
}

int main() {
    int choice;
    int exit = 0;

    while (!exit) {
        printf("Welcome to the ATM interface!\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                withdrawMoney();
                break;
            case 3:
                depositMoney();
                break;
            case 4:
                exit = 1;
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

        printf("\n");
    }

    printf("Thank you for using the ATM interface!\n");
    return 0;
}
