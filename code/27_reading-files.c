#include <stdio.h>
#include <stdlib.h>

//You need to create employee.txt or run session-26
int     main(void)
{
    char line[255];
    FILE *fpointer = fopen("employees.txt", "r");

    fgets(line, 255, fpointer); // run only first line
    fgets(line, 255, fpointer); // run only second line
    printf("%s", line);

    fclose(fpointer);
    return (0);
}