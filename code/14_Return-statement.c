#include <stdio.h>
#include <stdlib.h>

double cube(double num)
{
    return(num * num * num);
    printf("Here"); //it's not print !!
}

int     main(void)
{
    printf("Answer: %f", cube(3));
    return (0);
}