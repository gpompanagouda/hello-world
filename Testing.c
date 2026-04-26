#include <stdio.h>

int main(void)
{
    double principal, rate, time, simple_interest;

    printf("Enter principal amount: ");
    if (scanf("%lf", &principal) != 1) return 1;    

    printf("Enter annual interest rate (percent): ");
    if (scanf("%lf", &rate) != 1) return 1;

    printf("Enter time in years: ");
    if (scanf("%lf", &time) != 1) return 1;

    simple_interest = (principal * rate * time) / 100.0;

    printf("Simple Interest = %.2f\n", simple_interest);
    return 0;
}