#include <stdio.h>
#include <stdlib.h>

void    sayhi(const char *name, int age)
{
    printf("Hello %s, you are %d\n", name, age);
}
int     main()
{
    sayhi("diaz", 20);
    return (0);
}