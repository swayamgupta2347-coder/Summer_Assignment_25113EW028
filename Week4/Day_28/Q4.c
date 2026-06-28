#include <stdio.h>
int main()
{
    int choice;
    char name[30] = "Swayam";
    long long phone = 9876543210;
    do
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. View Contact\n");
        printf("2. Update Contact\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\nName : %s",name);
                printf("\nPhone : %lld\n",phone);
                break;

            case 2:
                printf("Enter New Name: ");
                scanf("%s",name);
                printf("Enter New Phone: ");
                scanf("%lld",&phone);
                printf("Contact Updated Successfully.\n");
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }
    }while(choice!=3);
    return 0;
}