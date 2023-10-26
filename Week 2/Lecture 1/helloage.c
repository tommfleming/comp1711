#include <stdio.h>

int main()
{
    int age;

    // & is the “address of” operator - although we can print the contents of a variable by referring to it directly - scanf needs to know the memory address of the variable
    printf("Hello, please enter your age: ");
    scanf("%d", &age);

    // prints age
    printf("Your age is %d\n", age);

    // got to return something
    return 0;
}