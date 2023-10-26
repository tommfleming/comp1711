#include <stdio.h>

int main() {
    
    int choice;
    printf("Enter number from 1-5 to choose option: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("1 Selected, Painting submarine yellow.\n");
        break;

        case 2: printf("2 Selected, The cow is now jumping over the moon.\n");
        break;

        case 3: printf("3 Selected, Humpty Dumpty fell off the wall.\n");
        break;

        case 4: printf("4 Selected, Jack and Jill went up the hill.\n");
        break;

        case 5: printf("5 Selected, Execute order 66.\n");
        break;

        default: printf("A different option has been selected\n");
    }

    return 0;
}