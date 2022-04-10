#include <stdio.h>
#include <stdlib.h>

int main()
{
    char characterName[] = "John";
    int characterAge = 35;

    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old. \n", characterAge);
    printf("he really liked the name %s\n", characterName);
    printf("but did not like being %d. \n", characterAge);

    characterAge = 40;
    printf("In Future about 5 years\n");
    printf("%s will be %d years old.\n", characterName, characterAge);
    
    return 0;
}