#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index;
    int i;

    index = 1;
    while (index <= 5)
    {
        printf("%d\n", index);
        index++; // index = index + 1
    }

    i = 6;
    do
    {
        printf("%d\n", i);
        i++;
    } while (index <= 5);



    return (0);
}