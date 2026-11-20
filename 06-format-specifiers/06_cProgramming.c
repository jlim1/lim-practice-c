// The format specifiers select how each number or string appears in the output.
#include <stdio.h>

int main(void) {
    printf("%s is best person ever \n", "Bucky");

    printf("I ate %d corndogs last night \n", 9);

    printf("Value of pi is %f \n", 3.14159);

    printf("Value of pi is %.2f \n", 3.14159);

    printf("Value of pi is %.3f \n", 3.14159);

    return 0;
}
