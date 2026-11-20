// Parentheses change which operation is evaluated first.
#include <stdio.h>

int main(void) {
    int a = 4 + 2 * 6;
    printf("Result: %d \n", a);
    a = (4 + 2) * 6;
    printf("Result: %d \n", a);

    return 0;
}
