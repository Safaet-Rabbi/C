#include<stdio.h>
#include<string.h>

int main() {
    int i, flag = 1;
    char str[101];
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9') {
            printf("YES\n");
            flag = 0;
            break;
        }
        else
            flag = 1;
    }

    if (flag == 1)
        printf("NO\n");

    return 0;
}
