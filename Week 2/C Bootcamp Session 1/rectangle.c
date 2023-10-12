#include <stdio.h>

int main() {

    // can do float width, length, area;
    int length;
    int width;
    int area;

    printf("Enter length of rectangle: ");
    scanf("%d", &length);

    printf("Enter width of rectangle: ");
    scanf("%d", &width);

    area = length * width;
    printf("The area of the rectangle is %d\n", area);

    return 0;
}