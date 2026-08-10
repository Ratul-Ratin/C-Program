//-----------(switch-case)-----------
//-------------------------------------

#include<stdio.h>
void main()
{
    int choice,total,amount;
    printf("\n1.Mobile Recharge\n2.Internet Package\n3.Utility Bill\n4.Exit");
    printf("\nEnter a digit for your choice:");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Enter recharge ammount:");
        scanf("%d",&amount);

        if (amount>=500)
        {
            total= amount+(amount*0.05);
        }

        else
        {
            total=amount;
        }
        printf("Total Bill:%d BDT",total);
        break;
    
    case 2:
        printf("Enter Package Price:");
        scanf("%d",&amount);

        total= amount+(amount*0.1);

        printf("Total Bill:%d BDT",total);
        break;
    
    case 3:
        printf("Enter Utility Bill:");
        scanf("%d",&amount);

        total= amount+(amount*0.02);

        printf("Total Bill:%d BDT",total);
        break;
    
    case 4:
        printf("Exit");
        break;
    
    default:
        printf("Invalid Input!!");
        
    }
}