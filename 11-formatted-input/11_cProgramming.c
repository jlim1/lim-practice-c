// Field widths leave one byte for the terminator when scanning each name.
#include <stdio.h>

int main(void) {
    char firstName[20];
    char crush[20];
    int numberOfBabies;

    printf("What is your name? \n");
    if (scanf("%19s", firstName) != 1) return 1;

    printf("Who are you going to marry? \n");
    if (scanf("%19s", crush) != 1) return 1;

    printf("How many kids will you have? \n");
    if (scanf("%d", &numberOfBabies) != 1) return 1;

    printf("%s and %s are in love and will have %d babies", firstName, crush, numberOfBabies);

    return 0;
}
