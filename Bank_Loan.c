//-----------(nested if-else)----------
//---------------------------------------

#include<stdio.h>
void main()
{
    int income,credit_hour,loan;
    printf("Enter Your Monthly Income:");
    scanf("%d",&income);

    if (income>=30000)
    {
        printf("Enter credit hour:");
        scanf("%d",&credit_hour);

        if (credit_hour>=750)
        {
            loan = income*credit_hour;
            printf("Maximum Loan Amount:%d",loan);

        }

        else
        {
            printf("Low Credit Hour!!");
        }
    }

    else
    {
        printf("Insufficient Income!!");
    }

}