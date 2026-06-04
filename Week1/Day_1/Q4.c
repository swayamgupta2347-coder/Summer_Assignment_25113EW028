#include<stdio.h> 
int main()
{
    int n,c=0;

    printf("enter a number");
    scanf("%d",&n);

    while(n>0)
    {
        n=n/10;
        c++;
    }
    printf("number of digits of a  number=%d",c);

}