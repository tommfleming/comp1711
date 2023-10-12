#include <stdio.h>

int main()
{
    // var with 15 slots of memory for a string
    char name[15];

    // promts user and takes input
    printf("Hello, please enter your name: ");
    scanf("%s", name);

    // prints name
    printf("Your name is %s\n", name);

    // got to return something
    return 0;
}