#include <stdio.h>
int main() {
    int num,pos = 0,neg = 0;

    printf("Enter a set of numbers (terminate with 0):\n");//give input 0 as last input

    do {
        scanf("%d",&num);

        if (num > 0) {
            pos++;
        } else if (num < 0) {
            neg++;
        }
    } while(num != 0);

    printf("Positive numbers: %d\n",pos );
    printf("Negative numbers: %d\n",neg );


}
