#include <stdio.h>
#include <stdlib.h>

int main() {
    char* filename = "data.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Length of line to read in
    int buffer_size = 100;

    // String holding each line as it's read in
    char line_buffer[buffer_size];

    int count = 0;

    // An arbitrary large number
    int numbers[1000]; 

    // While not end of file
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        printf("%d\n", atoi(line_buffer));
        numbers[count] = atoi(line_buffer);
        count += 1;
    }

    printf("There were %d lines \n", count);

    fclose(file);
    return 0;
}