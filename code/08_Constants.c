#include <stdio.h>
#include <stdlib.h>
// constant is a special type of variable and c which can't be modified
int main()
{
    int num = 1; //it can modified
    printf("%d\n", num);
    num = 2;
    printf("%d\n", num);

    const int num2 = 3; //it can't modified
    printf("%d\n", num2);
    //num2 = 4; //error this line 
    printf("%d\n", num2);
    printf("HELLO WORLD\n");//this's constants.
    printf("%s\n", "hello world");//this's constants.
    return (0);
}