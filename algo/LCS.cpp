#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;

    cout << "Enter the first string: ";
    cin >> s1;

    cout << "Enter the second string: ";
    cin >> s2;

    int m = s1.length();
    int n = s2.length();

    // Create a 2D array to store the lengths of LCS for subproblems
    int dp[m + 1][n + 1];

    // Build the dp table in a bottom-up manner
    for (int i = 0; i <= m; ++i)
    {
        for (int j = 0; j <= n; ++j)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    // Length of LCS is stored in dp[m][n]

    cout << "Length of Longest Common Subsequence: " << dp[m][n] << endl;
    // Backtrack to find one of the LCS
    string lcs;
    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            lcs = s1[i - 1] + lcs;
            i--;
            j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }

    cout << "One of the Longest Common Subsequences: " << lcs << endl;

    return 0;
}
