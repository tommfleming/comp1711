#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Define any additional variables here

// Length of line to read in
int buffer_size = 100;

// String holding each line as it's read in
char line_buffer[100];

char date[11];
char time[6];
char steps[10];

int count = 0;

// Array of records, length is an arbitray large number
FITNESS_DATA dataList[1000]; 

// Instance of the record
FITNESS_DATA data;

// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

}

// Complete the main function
int main() {

    // Open file
    char* filename = "FitnessData_2023.csv";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // While not end of file
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        tokeniseRecord(line_buffer, ",", date, time, steps);

        // Initialise record data with values outputted from tokeniseRecord()
        strcpy(data.date, date);
        strcpy(data.time, time);
        data.steps = atoi(steps);

        // Insert record data into dataList
        dataList[count] = data;

        count += 1;
    }

    // Output number of records and first three lines in file
    printf("Number of records in file: %d\n", count);
    printf("%s/%s/%d\n", dataList[0].date, dataList[0].time, dataList[0].steps);
    printf("%s/%s/%d\n", dataList[1].date, dataList[1].time, dataList[1].steps);
    printf("%s/%s/%d\n", dataList[2].date, dataList[2].time, dataList[2].steps);

    fclose(file);
    return 0;
}
