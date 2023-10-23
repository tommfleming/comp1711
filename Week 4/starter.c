#include <stdio.h>

int main() {

    int num = 0, total = 0, i = 0;
    int arr[10];

    int mean() {
        for (i = 0; i < 10; i++) {
            printf("Enter a number: ");
            scanf("%d", &num);
            total += num;
            arr[i] = num;
        }
        printf("The mean is %d\n", total / 10);
        return 0;
    }

    mean();
    return 0;
}