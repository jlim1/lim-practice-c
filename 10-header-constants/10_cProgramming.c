// The header supplies the name and age constants before the compiler translates main.
#include <stdio.h>

#include "Buckysinfo.h"

int main(void) {
    int girlsAge = (AGE / 2) + 7;
    printf("%s can date girls age %d or older.", MYNAME, girlsAge);
    return 0;
}
