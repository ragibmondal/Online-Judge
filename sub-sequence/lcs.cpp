#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    int m = str1.size();
    int n = str2.size();

    // Create a 2D DP table
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Fill the DP table
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;  // If characters match, take diagonal value + 1
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);  // Otherwise, take the max of left or top
            }
        }
    }

    // The length of LCS is stored in dp[m][n]
    cout << dp[m][n] << endl;

    return 0;
}
