#include <stdio.h>

int main() {
    int num = 25;

    if (num > 0) {
        printf("The number %d is positive\n", num);
    }

    else if (num == 0) {
        printf("The number %d is zero\n", num);
    }

    else {
        printf("The number %d is negative\n", num);
    }

    return 0;
}