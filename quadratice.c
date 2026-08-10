#include<stdio.h>
#include<math.h>
void main()
{
    int a, b, c;
    float x1, x2, x, p, q;

    printf("Enter the value of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    p = (b * b) - (4 * a * c);
    q = sqrt(p);
    x1 = (-b + (q / (2 * a)));
    x2 = (-b - (q / (2 * a)));
    x = (float)(-c) / b;      //*****c and b er value amra int nichi but x chacchi float,eita float show korbe na.tai typecasting kora lagse. Jodi c and b o float hisabe nitam tahole typecasting kora lagto na 

    if (a == 0 && b == 0)
    {
        printf("No solution");
    }

    else if (a == 0)
    {
        printf("There is only one root: %.2f", x);
    }

    else if (p < 0)
    {
        printf("There are no real roots");
    }

    else
    {
        printf("There are two real roots:\n");
        printf("X1 = %.2f\n", x1);
        printf("X2 = %.2f\n", x2);
    }

}

