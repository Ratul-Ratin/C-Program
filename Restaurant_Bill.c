//-------------(switch-case)-------------
//-----------------------------------------

#include<stdio.h>
void main()
{
    int choice,quantity,total,bill;
    printf("\n1.Burger(250TK)\n2.Pizza(600TK)\n3.Fried Rice(350Tk)\n4.Pasta(300TK)");
    printf("\nSelect a number for order:");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Quantity:");
        scanf("%d",&quantity);

        total=250*quantity;
        break;
    
    case 2:
        printf("Quantity:");
        scanf("%d",&quantity);

        total=600*quantity;
        break;
    
    case 3:
        printf("Quantity:");
        scanf("%d",&quantity);

        total=350*quantity;
        break;
    
    case 4:
        printf("Quantity:");
        scanf("%d",&quantity);

        total=300*quantity;
        break;
    
    default:
        printf("Invalid Input!!");
    }

    if (total>1500)
    {
        bill = total-(total*0.1);
        printf("Total Bill after 10%% off:%dTK",bill);
    }
    else
    {
        bill=total;
        printf("Total Bill:%d",bill);
    }
}