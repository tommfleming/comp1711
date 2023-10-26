#include <stdio.h>

int main()
{
    char *filename = "data.txt";

    FILE *file = fopen(filename, "w"); // or "a", "w+", "a+"
    if (file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    int number, num_lines, total = 0;
    printf("Enter how many number you want to enter: ");
    scanf("%d", &num_lines);
    
    printf("Type %d numbers: ", num_lines);
    
    for (int i = 0; i < num_lines; i++)
    {
        scanf("%d", &number);
        fprintf(file, "%d\n", number);
        total += number;
    }

    fprintf(file, "%d\n", total / num_lines);
    fclose(file);
    return 0;
}