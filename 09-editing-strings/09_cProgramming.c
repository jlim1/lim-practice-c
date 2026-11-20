// The array can be modified in place, including the terminator when copying a new word.
#include <stdio.h>
#include <string.h>

int main(void) {
    char name[14] = "Casey Example";
    printf("My name is %s \n", name);

    name[2] = 'z';
    printf("My name is %s \n", name);

    char food[6] = "tuna";
    printf("The best food is %s \n", food);

    strcpy(food, "bacon");
    printf("The best food is %s \n", food);

    return 0;
}
