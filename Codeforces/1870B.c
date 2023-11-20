#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int b[m];
        for (int i = 0; i < m; i++) {
            scanf("%d", &b[i]);
        }

        int min_x = a[0]; // Initialize min_x with the first element of array a
        int max_x = a[0]; // Initialize max_x with the first element of array a

        for (int i = 0; i < m; i++) {
            min_x = min_x | b[i]; // Perform bitwise OR operation with each element of array b
            max_x = max_x | b[i]; // Perform bitwise OR operation with each element of array b
        }

        for (int i = 1; i < n; i++) {
            min_x = min_x | a[i]; // Perform bitwise OR operation with each element of array a
            max_x = max_x | a[i]; // Perform bitwise OR operation with each element of array a
        }

        printf("%d %d\n", min_x, max_x);
    }

    return 0;
}
