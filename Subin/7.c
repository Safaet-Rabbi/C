#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,count;
    char str[100];
    scanf("%d",&n);
    getchar();
    for(int j = 0; j < n; j++){
        count = 1;
        gets(str);
        for(i = 0; i < strlen(str); i++){
            if(str[i] == ' '){
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;

}
