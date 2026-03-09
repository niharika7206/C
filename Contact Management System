#include <stdio.h>

struct Contact {

    char name[50];
    char phone[15];
};

int main() {

    struct Contact c[100];
    int n=0,i,choice;

    while(1) {

        printf("\n1 Add Contact");
        printf("\n2 Display Contacts");
        printf("\n3 Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        if(choice==1) {

            printf("Enter name: ");
            scanf("%s",c[n].name);

            printf("Enter phone: ");
            scanf("%s",c[n].phone);

            n++;
        }

        else if(choice==2) {

            for(i=0;i<n;i++) {

                printf("\nName: %s",c[i].name);
                printf("\nPhone: %s\n",c[i].phone);
            }
        }

        else
            break;
    }
}
