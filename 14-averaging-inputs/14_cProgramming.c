// Adding the three ages before dividing gives each age equal weight.
#include <stdio.h>

int main(void) {
    float age1, age2, age3, average;
    age1 = age2 = 4.0;

    printf("Enter your age\n");
    if (scanf("%f", &age3) != 1) return 1;

    average = (age1 + age2 + age3) / 3;
    printf("\n The average age of the group is %f", average);

    return 0;
}
