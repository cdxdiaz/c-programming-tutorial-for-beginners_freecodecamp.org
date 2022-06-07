#include <stdio.h>
#include <stdlib.h>
int main()
{
/*
    //the program have problem with float number.
    int num1;
    int num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Answer: %d", num1 + num2);
*/
    double num1;
    double num2;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Answer: %f", num1 + num2);
    return (0);
}