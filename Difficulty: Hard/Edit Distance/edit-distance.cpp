//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int editDistRec(string& s1, string& s2, int m, int n, vector<vector<int>> &memo) {
  
    // If first string is empty, the only option is to
    // insert all characters of second string into first
    if (m == 0) return n;

    
    if (n == 0) return m;
    
    // If value is memoized
    if (memo[m][n]!=-1) return memo[m][n];

    
    if (s1[m - 1] == s2[n - 1]) 
      return memo[m][n] = editDistRec(s1, s2, m - 1, n - 1, memo);

    
    return memo[m][n] = 
            1 + min({editDistRec(s1, s2, m, n - 1, memo),  
                    editDistRec(s1, s2, m - 1, n, memo),   
                    editDistRec(s1, s2, m - 1, n - 1, memo)}); 
}
    // Function to compute the edit distance between two strings
    int editDistance(string& s1, string& s2) {
        // code here
        int m = s1.length(), n = s2.length();
        vector<vector<int>> memo(m+1, vector<int>(n+1, -1));
        return editDistRec(s1, s2, m, n, memo);
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        string s1;
        getline(cin, s1);
        string s2;
        getline(cin, s2);
        Solution ob;
        int ans = ob.editDistance(s1, s2);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends