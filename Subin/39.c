#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, j;
    char str1[1001], str2[1001];
    scanf("%d", &n);
    while (n--)
    {
       scanf("%s", &str1);
       int l = strlen(str1);

        for (j = 0, i = l - 1; i >= 0; i--)
        {
            str2[j] = str1[i];
            j++;
        }

        str2[j] = '\0';

        if (strcmp(str1, str2) == 0)
        {
            printf("Yes! It is a palindrome!\n");
        }
        else
        {
            printf("Sorry! It is not a palindrome!\n");
        }
    }

    return 0;
}
