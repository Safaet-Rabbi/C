#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[51];
        scanf("%s", s);

        int len = strlen(s);


        int count[26] = {0};
        for (int i = 0; i < len; i++) {
            count[s[i] - 'a']++;
        }


        int oddCount = 0;
        for (int i = 0; i < 26; i++) {
            if (count[i] % 2 == 1) {
                oddCount++;
            }
        }


        if (oddCount == 1 || oddCount == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
