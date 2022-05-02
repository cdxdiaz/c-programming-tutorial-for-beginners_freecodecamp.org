#include <stdio.h>
#include <stdlib.h>

int     main(void)
{
    printf("My favorite %s is %d\n", "number" , 500);

    printf("My favorite %s is %f\n", "number" , 500.00);

    int favNum = 90;
    printf("My favorite %s is %d\n", "number" , favNum);

    char myChar[] = "NUMBER";
    printf("My favorite %s is %d\n", myChar , favNum);

    return 0;
}