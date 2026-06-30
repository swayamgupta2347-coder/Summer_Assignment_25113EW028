#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    float marks;
};
struct Student s[100];
int n, i;
void addStudents()
{
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}
void displayStudents()
{
    printf("\n----- Student Records -----\n");
    for(i = 0; i < n; i++)
    {
        printf("\nRoll No : %d", s[i].roll);
        printf("\nName    : %s", s[i].name);
        printf("\nMarks   : %.2f\n", s[i].marks);
    }
}
int main()
{
    int choice;
    do
    {
        printf("\n===== Student Management System =====");
        printf("\n1. Add Students");
        printf("\n2. Display Students");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                addStudents();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                printf("Thank You!");
                break;
            default:
                printf("Invalid Choice!");
        }
    } while(choice != 3);
    return 0;
}