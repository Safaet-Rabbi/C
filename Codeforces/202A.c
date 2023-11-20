#include <stdio.h>
#include <string.h>

int max(int a, int b) {
  return a > b ? a : b;
}

char *findLLPS(char *s) {
  int n = strlen(s);
  int dp[n][n];
  char llps[n + 1];

  for (int i = 0; i < n; i++) {
    dp[i][i] = 1;
    llps[i] = s[i];
  }
  llps[n] = '\0';

  for (int i = n - 1; i >= 0; i--) {
    for (int j = i + 1; j < n; j++) {
      if (s[i] == s[j]) {
        dp[i][j] = 2 + dp[i + 1][j - 1];
        if (dp[i][j] > dp[0][n - 1]) {
          memcpy(llps, s + i, dp[i][j]);
          llps[dp[i][j]] = '\0';
        }
      } else {
        dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
      }
    }
  }

  return llps;
}

int main() {
  char s[11];
  scanf("%s", s);

  char *llps = findLLPS(s);
  printf("%s\n", llps);

  free(llps);

  return 0;
}
