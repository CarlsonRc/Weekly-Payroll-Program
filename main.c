#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A = 0;
    float sum , product, X, Y;

    float division, tax, net;
    //char myChar;

    printf("\nEnter the Employee's number :");
    scanf("%d" , &A);


    printf("\nEnter the pay rate per hour :");
    scanf("%f" , &X);


    printf("\nEnter the enter the regular hours worked :");
    scanf("%f" , &Y);



    printf("\n");
    printf("\n");
    printf("\t\tThank You!\n");
    printf("\t\tHere is your paycheck!\n");
    printf("\n");
    printf("\n");
    printf("\t\t--------------------------------------------\n");
        sum = X + Y;
    product = X * Y;
    tax = product * .06;
    net = product - tax;
    division = (float) X/Y;
    printf("\t\tEmployee's number:\t%d\n" , A);
    printf("\t\tHourly rate of pay:\t\t$%.2f\n", X);
    printf("\t\tHours worked:\t\t%.2f\n", Y);
    printf("\t\tTotal gross pay:\t\t$%.2f\n", product);
    printf("\n");
    printf("\t\t\tDeductions\n");
    printf("\t\t\tTax (6%%): $%.2f\n", tax);
    printf("\t\tNet pay:\t\t\t$%.2f\n", net);
    //printf("\t\t%d + %d = %d\n", X, Y, sum);
    //printf("\t\t%d * %d = %d\n", X, Y, product);
    //printf("\t\t%d / %d = %.2f\n", X, Y, division);
    printf("\t\t--------------------------------------------\n");
    return 0;
}
