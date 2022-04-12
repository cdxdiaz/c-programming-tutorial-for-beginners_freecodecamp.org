#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello\nWorld\n");
    printf("Hello\"World\"\n");
    printf("My favorite %s is %d\n", "number", 500);
    printf("My favorite %s is %f\n", "number", 500.0000);

    int favnum = 90;
    printf("My favorite %s is %d\n", "number", favnum);

    char mychar = 'i';
    printf("My favorite %c is %d\n", mychar, favnum);

    return 0;
}