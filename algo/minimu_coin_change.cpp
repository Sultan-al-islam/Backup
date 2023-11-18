#include <bits/stdc++.h>
using namespace std;

int main()
{
    int coins[] = {1, 2, 5};
    int n = sizeof(coins) / sizeof(coins[0]);
    int amount = 11;

    // dp[i][j] represents the minimum number of coins needed to make change for amount j using the first i coins
    int dp[n + 1][amount + 1];

    // Initialize the first column (amount = 0) with 0, as 0 coins are needed to make change for amount 0
    for (int i = 0; i <= n; ++i)
    {
        dp[i][0] = 0;
    }

    // Initialize the first row (no coins available) with INT_MAX to indicate invalid states
    for (int j = 1; j <= amount; ++j)
    {
        dp[0][j] = INT_MAX;
    }

    // Build the dp array bottom-up
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= amount; j++)
        {
            dp[i][j] = dp[i - 1][j]; // Initialization with the value from the row above

            if (coins[i - 1] <= j && dp[i][j - coins[i - 1]] != INT_MAX)
            {
                dp[i][j] = min(dp[i][j], 1 + dp[i][j - coins[i - 1]]);
            }
        }
    }

    cout << "Minimum number of coins needed: " << dp[n][amount] << endl;
    vector<int> selectedCoins;

    int i = n, j = amount;

    while (i > 0 && j > 0)
    {
        if (dp[i][j] != dp[i - 1][j])
        {
            selectedCoins.push_back(coins[i - 1]);
            j -= coins[i - 1];
        }
        i--;
    }

    for (int k = selectedCoins.size() - 1; k >= 0; k--)
    {
        cout << selectedCoins[k] << " ";
    }
    cout << endl;

    return 0;
}
