//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  bool isSubsetSum(int n, vector<int>& arr, int sum, 
                 vector<vector<int>> &memo) {
    
    // base cases
    if (sum == 0)
        return true;
    if (n == 0)
        return false;
        
    if (memo[n-1][sum]!=-1) return memo[n-1][sum];

    // If element is greater than sum, then ignore it
    if (arr[n-1] > sum)
        return isSubsetSum(n-1, arr, sum, memo);

    // Check if sum can be obtained by any of the following
    // (a) including the current element
    // (b) excluding the current element
    return memo[n-1][sum] = 
            isSubsetSum(n-1, arr, sum, memo) || 
            isSubsetSum(n-1, arr, sum - arr[n-1], memo);
}
    bool equalPartition(vector<int>& arr) {
        // code here
        int sum = accumulate(arr.begin(), arr.end(), 0);

    // If sum is odd, there cannot be two 
    // subsets with equal sum
    if (sum % 2 != 0)
        return false;
    
    vector<vector<int>> memo(arr.size(), vector<int>(sum+1, -1));
    
    // Find if there is subset with sum equal 
    // to half of total sum
    return isSubsetSum(arr.size(), arr, sum / 2, memo);
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

        Solution ob;
        if (ob.equalPartition(arr))
            cout << "true\n";
        else
            cout << "false\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends