#include <stdio.h>
#include <stdlib.h>
//an alternate to if-else-if ladder statement which allows us 
//to execute multiple operations for the different possibles 
//values of a single variable called switch variable.
int     main(void)
{
    char grade = 'A';

    switch(grade)
    {
    case 'A' :
        printf("You did great!");
        break;
    case 'B':
        printf("You did alright!");
        break;
    case 'c':
        printf("You did poorly");
        break;
    case 'D':
        printf("You ddd very bad");
        break;
    case 'F':
        printf("You did failed");
        break;
    default :
        printf("Invalid Grade");

    }

    return (0);
}