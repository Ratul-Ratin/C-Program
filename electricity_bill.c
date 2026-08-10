#include<stdio.h>
void main()
{
    int unit,meter_charge=169;
    float bill,g_bill,t_bill,tax;
    printf("Enter total unit:");
    scanf("%d",&unit);

    if(unit <= 100)
    {
        bill= unit*7;
    }
    else if(unit <=200)
    {
        bill= 700+(unit-100)*8;
    }
    else
    {
        bill= 1500 +(unit-200)*9;
    }

    t_bill=bill+meter_charge;

    tax = t_bill*0.12;

    if (t_bill>5000)
    {
        g_bill=t_bill+(tax);
    }
    else
    {
        g_bill=t_bill;
    }

    printf("\nMeter Charge:169");
    printf("\nTotal Bill:%.2f",t_bill);
    printf("\nTax:%.2f",tax);
    printf("\nGross Bill:%.2f",g_bill);

}

