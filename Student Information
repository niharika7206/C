#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {

    struct Student s[100];
    int n = 0, choice, i, searchRoll;

    while(1) {

        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice) {

            case 1:
                printf("Enter Roll: ");
                scanf("%d",&s[n].roll);

                printf("Enter Name: ");
                scanf("%s",s[n].name);

                printf("Enter Marks: ");
                scanf("%f",&s[n].marks);

                n++;
                break;

            case 2:
                for(i=0;i<n;i++) {
                    printf("\nRoll: %d",s[i].roll);
                    printf("\nName: %s",s[i].name);
                    printf("\nMarks: %.2f\n",s[i].marks);
                }
                break;

            case 3:
                printf("Enter roll to search: ");
                scanf("%d",&searchRoll);

                for(i=0;i<n;i++) {
                    if(s[i].roll == searchRoll) {
                        printf("Student Found\n");
                        printf("Name: %s\n",s[i].name);
                        printf("Marks: %.2f\n",s[i].marks);
                    }
                }
                break;

            case 4:
                exit(0);
        }
    }
}
