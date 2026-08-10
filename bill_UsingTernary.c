#include<stdio.h>

void main()
{
    int unit,meter_charge=47;
    float bill,bill2,g_bill,tax;

    printf("Enter the units:");
    scanf("%d",&unit);

    (unit<=100)?(bill= unit*8):
    ((unit<=200)?(bill = 800+(unit-100)*9):(bill = 1700+(unit-200)*10));

    bill2 = bill+meter_charge;
    (bill2>5000)?(tax = bill2*0.10 , g_bill=bill2+tax):(g_bill=bill2);

    printf("\nBill=%.2f",bill);
    printf("\nMeter Charge=%d   Tax=%.2f",meter_charge,tax);
    printf("\nGross Bill=%.2f",g_bill);
    
}
