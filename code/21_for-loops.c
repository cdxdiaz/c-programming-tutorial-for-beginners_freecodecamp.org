#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};

    for (i = 0; i < 6; i++)
    {
        printf("%d\n", luckyNumbers[i]);
    }
    return (0);
}