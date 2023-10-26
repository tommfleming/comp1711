#include <stdio.h>

int main() {
    
    int mark;
    printf("Enter mark of student: ");
    scanf("%d", &mark);

    if (mark > 100 || mark < 0) {
        printf("Error, invalid mark.\n");
    }

    else {
        if (mark >= 70 && mark <= 100) {
            printf("Student got a distinction!\n");
        }

        else if (mark >= 50) {
            printf("Student passed.\n");
        }

        else  {
            printf("Student failed.\n");
        }
    }

    return 0;
}