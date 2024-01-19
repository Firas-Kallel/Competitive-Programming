#include <stdio.h>
#include <limits.h>

int minCoins(int coins[], int m, int amount) {
    int dp[amount + 1];
    dp[0] = 0;

    for (int i = 1; i <= amount; i++) {
        dp[i] = INT_MAX;
        for (int j = 0; j < m; j++) {
            if (coins[j] <= i && dp[i - coins[j]] != INT_MAX) {
                dp[i] = dp[i] < (1 + dp[i - coins[j]]) ? dp[i] : (1 + dp[i - coins[j]]);
            }
        }
    }

    return dp[amount];
}

int main() {
    int x, n;
    scanf("%d", &x);
    scanf("%d", &n);

    int denominations[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &denominations[i]);
    }

    printf("%d\n", minCoins(denominations, n, x));

    return 0;
}
