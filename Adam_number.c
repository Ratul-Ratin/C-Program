#include<stdio.h>

void main()
{
    int n,sq_n,p,r_sqn,r_n,sq_rn,rem1,rev1,rem2,rev2;

    printf("Enter Value of N:");
    scanf("%d",&n);

    rev1=0;
    rev2=0;

    p=n;
    sq_n=n*n;

    // Reverse of N^2
    while(sq_n!=0)
    {
        rem1=sq_n%10;
        rev1=rev1*10+rem1;
        sq_n=sq_n/10;
    }

    // Reverse of N
    while(p!=0)
    {
        rem2=p%10;
        rev2=rev2*10+rem2;
        p=p/10;
    }

    // Square of reverse(N)
    sq_rn=rev2*rev2;

    if(sq_rn==rev1)
    {
        printf("Adam Number");
    }
    else
    {
        printf("Not Adam Number");
    }
}
