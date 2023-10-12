#include <stdio.h>

int main()
{
    int a, total;

    for (a = 1; a < 20; a+=2)
    {
        total += a;
        printf("Total of odds is: %d\n", total);
    }
    
    printf("Woah, thats the first 10 squares!\n");
    return 0;
}