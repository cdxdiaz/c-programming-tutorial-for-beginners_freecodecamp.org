#include <stdio.h>
#include <stdlib.h>

int main()
{
/*    int age;

    printf("ENTER YOUR AGE: ");
    //type of informantion %d = number
    scanf("%d", &age);
    printf("You are %d years old", age);
 
    double gpa;
    printf("ENTER YOUR GPA: ");
    //type of informantion %lf = looking for double, %f = float
    scanf("%lf", &gpa);
    printf("Your GPA is %f", gpa);

    char name[20];
    printf("ENTER YOUR NAME: ");
    //type of informantion %s = strings
    //when put "diaz s". it print "diaz"
    scanf("%s", name);
    printf("Your name is %s", name);
*/
        char name[20];
    printf("ENTER YOUR NAME: ");
    //type of informantion %s = strings
    //when use scan f and  put "diaz s". it print "diaz"
    //fgets can fixed it.
    fgets(name, 20, stdin);
    printf("Your name is %s", name);

    return (0);
}