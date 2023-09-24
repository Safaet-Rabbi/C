#include<stdio.h>
#include<string.h>
int main()
{
    int n, i,j,k;
    int count[26] = {0};
    char str[100];
    scanf("%d", &n);
    getchar();

    while(n--)
    {
        gets(str);
        for(i = 0; str[i] != '\0'; i++)
        {

            if(str[i] >= 'a' && str[i] <= 'z')
            {
                count[str[i] - 'a']++;
            }
        }

        for(j = 0; j < 26; j++)
            {
            if(count[j] != 0){
                printf("'%c' = %d\n", 'a' + j, count[j]);
            }
        }
    // reset the count array for the next input string
    for(k=0;k<26;k++)
    {
        count[k]=0;
    }
    }
    return 0;
}
