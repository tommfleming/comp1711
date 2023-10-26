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

    int num_lines;
    char line[30];

    printf("Enter how many strings you want to enter: ");
    scanf("%d", &num_lines);
    
    printf("Type %d strings: \n", num_lines);
    
    for (int i = 0; i < num_lines; i++)
    {
        scanf("%s", line);
        fprintf(file, "%s\n", line);
    }

    fclose(file);
    return 0;
}