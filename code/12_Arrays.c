#include <stdio.h>
#include <stdlib.h>
int main()
{
    //In c we start arrays index at 0, first element
    //             index  0  1   2   3   4
    int     luckyNumbers[] = {4, 8, 15, 17, 20};

    //try to modified index 0
    luckyNumbers[0] = 5;
    printf("%d\n", luckyNumbers[0]);

    char    phrase[20] = "Array";
    printf("%c\n", phrase[0]);
    return (0);
}