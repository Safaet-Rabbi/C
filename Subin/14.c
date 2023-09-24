#include<stdio.h>
#include<string.h>
int main()
{
    int T, n, i, j, count;
    char str[100];
    char ch[5];

    scanf("%d", &T);
    getchar();
    for(j = 0; j < T; j++){
        count = 0;

        scanf("%[^\n]", str);
        getchar();
        scanf("%s", ch);
        getchar();
        for(i = 0; str[i] != '\0'; i++){
            if(str[i] == ch[0]){
                count++;
            }
        }
        if(count == 0){
            printf("'%c' is not present\n", ch[0]);
        }
        else{
            printf("Occurrence of '%c' in '%s' = %d\n", ch[0], str, count);
        }
    }
    return 0;
}
