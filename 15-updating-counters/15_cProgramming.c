// Each update stores the new count for the next print statement.
#include <stdio.h>

int main(void) {
    int pageViews = 0;

    pageViews = pageViews + 1;
    printf("Page views: %d \n", pageViews);
    pageViews = pageViews + 1;
    printf("Page views: %d \n", pageViews);
    pageViews = pageViews + 1;
    printf("Page views: %d \n", pageViews);

    float balance = 1000.00;

    balance *= 1.1;
    printf("Balance: %f \n", balance);
    balance *= 1.1;
    printf("Balance: %f \n", balance);
    balance *= 1.1;
    printf("Balance: %f \n", balance);

    return 0;
}
