// Subtracting the birth year from the current year gives the age reached that year.
#include <stdio.h>

int main(void) {
    int age;
    int currentYear;
    int birthYear;

    currentYear = 2014;
    birthYear = 2000;
    age = (currentYear - birthYear);

    printf("The example person is %d years old \n", age);

    return 0;
}
