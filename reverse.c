#include<stdio.h>
void main()
{
    int n,p,reminder,rn=0;

    printf("Enter a number:");
    scanf("%d",&n);
    p=n;
    
    while (p!=0)
    {
        reminder = p%10;
        rn = rn*10 +reminder;

        p/=10;

    }

    printf("\nYour Number:%d",n);
    printf("\nReverse Number:%d",rn);



}
