#include <stdio.h>

int main() {
    char name[15];
    char rev_name[15];
    rev_name = ""
    int i;

    printf("Enter your name: ");
    scanf("%s", name);

    for(i = 1; f <= strlen(name); f++)
    {
        rev_name += name[-i];
    }
    printf("Your name in reverse is %s\n", rev_name);

    return 0;
}