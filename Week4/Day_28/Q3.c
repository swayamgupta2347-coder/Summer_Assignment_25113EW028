#include <stdio.h>
int main()
{
    int totalSeats = 10;
    int choice, seats;
    do
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Available Seats\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter Seats to Book: ");
                scanf("%d",&seats);

                if(seats <= totalSeats)
                {
                    totalSeats -= seats;
                    printf("Booking Successful.\n");
                }
                else
                    printf("Seats Not Available.\n");
                break;

            case 2:
                printf("Enter Seats to Cancel: ");
                scanf("%d",&seats);
                totalSeats += seats;
                printf("Ticket Cancelled.\n");
                break;

            case 3:
                printf("Available Seats = %d\n",totalSeats);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }
    }while(choice!=4);
    return 0;
}