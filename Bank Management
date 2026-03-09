#include <stdio.h>

struct Account {

    int accNo;
    char name[50];
    float balance;
};

int main() {

    struct Account a;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d",&a.accNo);

    printf("Enter Name: ");
    scanf("%s",a.name);

    printf("Enter Initial Balance: ");
    scanf("%f",&a.balance);

    while(1) {

        printf("\n1 Deposit");
        printf("\n2 Withdraw");
        printf("\n3 Check Balance");
        printf("\n4 Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        if(choice==1) {

            printf("Enter amount: ");
            scanf("%f",&amount);

            a.balance += amount;
        }

        else if(choice==2) {

            printf("Enter amount: ");
            scanf("%f",&amount);

            if(amount > a.balance)
                printf("Insufficient balance\n");
            else
                a.balance -= amount;
        }

        else if(choice==3) {

            printf("Current balance: %.2f\n",a.balance);
        }

        else
            break;
    }
}
