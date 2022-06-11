#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fpointer = fopen("employees.txt", "w");
    fprintf(fpointer, "Jim, salesman\nPam, Receptionest\n");
    fclose(fpointer);
    //FILE *fpointer2 = fopen("employees.txt", "a"); //add to employee.txt
    //fprintf(fpointer2, "K, marketing\n");
    //fclose(fpointer2);
    
    return (0);
}