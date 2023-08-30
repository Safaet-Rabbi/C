#include <stdio.h>
int main() {
    int customer_code, calls_made;
    float bill;

    printf("Enter customer code: ");
    scanf("%d", &customer_code);

    printf("Enter number of calls made: ");
    scanf("%d", &calls_made);

    if (calls_made <= 100) {
        bill = 250.0;
    } else {
        bill = 250.0 + 1.25 * (calls_made - 100);
    }

    printf("Customer code: %d\n", customer_code);
    printf("Number of calls made: %d\n", calls_made);
    printf("Bill amount: Rs. %.2f\n", bill);


}
