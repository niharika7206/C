#include <stdio.h>

struct Book {
    int id;
    char name[50];
    char author[50];
};

int main() {

    struct Book b[100];
    int n = 0, i, choice;

    while(1) {

        printf("\n1 Add Book");
        printf("\n2 Display Books");
        printf("\n3 Exit");
        printf("\nEnter choice: ");

        scanf("%d",&choice);

        if(choice == 1) {

            printf("Enter Book ID: ");
            scanf("%d",&b[n].id);

            printf("Enter Book Name: ");
            scanf("%s",b[n].name);

            printf("Enter Author Name: ");
            scanf("%s",b[n].author);

            n++;
        }

        else if(choice == 2) {

            for(i=0;i<n;i++) {

                printf("\nBook ID: %d",b[i].id);
                printf("\nBook Name: %s",b[i].name);
                printf("\nAuthor: %s\n",b[i].author);
            }
        }

        else {
            break;
        }
    }
}
