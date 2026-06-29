#include <stdio.h>
int main()
{
    int id, qty;
    char name[50];
    float price, total;
    printf("===== INVENTORY MANAGEMENT SYSTEM =====\n");
    printf("Enter Product ID: ");
    scanf("%d", &id);
    printf("Enter Product Name: ");
    scanf("%s", name);
    printf("Enter Quantity: ");
    scanf("%d", &qty);
    printf("Enter Price: ");
    scanf("%f", &price);
    total = qty * price;
    printf("\n------ PRODUCT DETAILS ------\n");
    printf("Product ID   : %d\n", id);
    printf("Product Name : %s\n", name);
    printf("Quantity     : %d\n", qty);
    printf("Price        : %.2f\n", price);
    printf("Total Value  : %.2f\n", total);
    return 0;
}