//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int lps(const string& s, int low, int high) {

    // Base case
    if(low > high) return 0;
  
    // If there is only 1 character
    if (low == high)
        return 1;

    // If the first and last characters match
    if (s[low] == s[high])
        return lps(s, low + 1, high - 1) + 2;

    // If the first and last characters do not match
    return max(lps(s, low, high - 1), lps(s, low + 1, high));
}
    int longestPalinSubseq(string &s) {
        // code here
        int n = s.length();

    // Create a DP table
    vector<vector<int>> dp(n, vector<int>(n));

    // Build the DP table for all the substrings
    for (int i = n - 1; i >= 0; i--) {
        for (int j = i; j < n; j++) { 

            // If there is only one character
            if(i == j){
                dp[i][j] = 1;
                continue;
            }

            // If characters at position i and j are the same
            if (s[i] == s[j]) {
                if(i + 1 == j) dp[i][j] = 2;
                else dp[i][j] = dp[i + 1][j - 1] + 2;
            } 
            else {

                // Otherwise, take the maximum length
                // from either excluding i or j
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
            }
        }
    }

    // The final answer is stored in dp[0][n-1]
    return dp[0][n - 1];
    }
};


//{ Driver Code Starts.

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends