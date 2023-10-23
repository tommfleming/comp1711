#include <stdio.h>
#include <math.h>
#include "utils.h"

int main()
{
    char *filename = "squares.dat";
    FILE *file = open_file(filename, "w");

    int max;
    float sr;

    printf("Enter the number you want squares to be printed up to: ");
    scanf("%d", &max);

    printf("Square root of %f is %f\n", 4.0, sqrtf(4.0) );

    for (int i = 1; i < max; i++)
    {
        int num = i;
        sr = sqrtf(num);
        printf("%f\n", sr);

        if (sr*sr == i) {
            fprintf(file, "%d\n", i);
        }
    }

    fclose(file);
    return 0;
}