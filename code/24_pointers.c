#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int age = 30;
    int *pAge = &age;
    int age2 = 15;
    int *pAge2 = age2;
    double gpa = 3.4;
    double *pGpa = &gpa;
    char grade = 'A';
    char *pGrade = &grade;

    printf("age's s memory address: %p\n", &age);
    printf("pAge's s memory address: %p\n", pAge);
    printf("age2's s memory address: %p\n", &age2);
    printf("pAge2's s memory address: %p\n", pAge2);
    printf("%d\n", pAge2);

    return (0);
}