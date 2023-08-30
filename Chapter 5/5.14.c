#include <stdio.h>
int main() {
    int i,j,flag;
    int count = 0;

    printf("Prime numbers between 100 and 200 are: ");

    for (i = 100; i <= 200; i++) {
        flag = 0;
        for (j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && i != 1) {
            printf("%d ",i);
            count++;
        }
    }

    printf("\nTotal count: %d\n",count);


}
