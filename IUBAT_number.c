#include<stdio.h>

void main()
{
    int n,p, sn, rn;

    printf("Enter the value of N:\n");
    scanf("%d",&n);
    p=n;
    sn = n * n;

    printf("Square of the number: %d\n",sn);

    // Last two digits of square
    rn = sn % 100;

    printf("Last two digit: %d\n",rn);

    if(rn == p)
    {
        printf("It's an IUBAT Number\n");
    }
    else
    {
        printf("Not IUBAT Number\n");
    }
}