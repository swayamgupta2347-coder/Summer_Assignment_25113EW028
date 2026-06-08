#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,t,d,count=0,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    
    t=n;
    while(t>0)
    {
        t=t/10;
        count++;
    }

    t=n;
    while(t>0)
    {
        d=t%10;
        sum=sum+pow(d,count);
        t=t/10;
    }

    if(sum==n)
        printf("Entered number is Armstrong");
    else
        printf("Entered number is Not Armstrong");

    return 0;

}