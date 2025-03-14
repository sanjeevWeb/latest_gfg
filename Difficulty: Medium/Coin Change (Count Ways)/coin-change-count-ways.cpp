//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int countRecur(vector<int>& coins, int n, int sum, 
               vector<vector<int>> &memo) {
  
   
    if (sum == 0) return 1;

    // 0 ways in the following two cases
    if (sum < 0 || n == 0) return 0;
    
    
    if (memo[n-1][sum]!=-1) return memo[n-1][sum];

    
    return memo[n-1][sum] = 
        countRecur(coins, n, sum - coins[n-1], memo) + 
        countRecur(coins, n - 1, sum, memo);
}
    int count(vector<int>& coins, int sum) {
        // code here.
        vector<vector<int>> memo(coins.size(), vector<int>(sum+1, -1));
        return countRecur(coins, coins.size(), sum, memo);
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();
        Solution ob;
        cout << ob.count(arr, sum) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends