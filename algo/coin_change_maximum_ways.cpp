#include<bits/stdc++.h>
using namespace std;


int main() {
    // Coin denominations
    int coins[] = {1, 2, 5};
    
    // Size of the coins array
    int n = sizeof(coins) / sizeof(coins[0]);

    // Amount for which to make change
    int amount = 5;

    // Create a 2D matrix to store the solutions to subproblems
    int dp[amount + 1][n] = {0};

    // Initialize the first column: there is one way to make change for amount 0
    for (int i = 0; i <= n; ++i) {
        dp[0][i] = 1;
    }

    // Iterate through each coin and update the matrix
    for (int i = 1; i <= amount; ++i) {
        for (int j = 1; j <= n; ++j) {
            dp[i][j] = dp[i][j - 1];  // Exclude the current coin

            if (i >= coins[j - 1]) {
                dp[i][j] += dp[i - coins[j - 1]][j];  // Include the current coin
            }
        }
    }

    // The bottom-right corner of the matrix contains the answer
    int result = dp[amount][n - 1];

    // Output the result
    cout << "The maximum number of ways to make change for " << amount << " is: " << result << std::endl;

    return 0;
}
