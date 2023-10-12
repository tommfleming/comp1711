#include <stdio.h>
#include <string.h>

int main()
{
    int a, length;
    char str[15] = "hello";
    
    for (a = strlen(str); a > 0; a--)
    {
        printf("%c", str[a]);
    }
    printf("%c\n", str[a]);
    return 0;
}