#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int age = 30;
    int *p = &age;
    
    printf("%d\n", *p);
    printf("%p\n", *&p);
    return (0);
}