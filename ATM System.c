#include <stdio.h>

int main() {

    int pin = 1234, enteredPin;
    float balance = 10000;
    int choice;
    float amount;

    printf("Enter PIN: ");
    scanf("%d",&enteredPin);

    if(enteredPin != pin) {
        printf("Incorrect PIN");
        return 0;
    }

    while(1) {

        printf("\n1 Check Balance");
        printf("\n2 Deposit");
        printf("\n3 Withdraw");
        printf("\n4 Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice) {

            case 1:
                printf("Balance: %.2f\n",balance);
                break;

            case 2:
                printf("Enter amount: ");
                scanf("%f",&amount);
                balance += amount;
                break;

            case 3:
                printf("Enter amount: ");
                scanf("%f",&amount);
                if(amount > balance)
                    printf("Insufficient Balance\n");
                else
                    balance -= amount;
                break;

            case 4:
                return 0;
        }
    }
}
