// ------(else-if ladder)--------
//---------------------------------

#include<stdio.h>
void main()
{
    int salary,Total,Final;
    printf("Enter Your Basic Salary:");
    scanf("%d",&salary);

    if (salary<20000)
    {
        Total=salary+(salary*0.05);
    }
    
    else if (salary<40000)
    {
        Total=salary+(salary*0.1);
    }
    else if(salary<60000)
    {
        Total=salary+(salary*0.15);
    }
    else if (salary>=60000)
    {
        Total=salary+(salary*0.20);
    }
    else
    {
        printf("Invalid Amount!!");
    }

    Final=Total-(Total*0.05);
    printf("Your Salary:%d",Final);    

}