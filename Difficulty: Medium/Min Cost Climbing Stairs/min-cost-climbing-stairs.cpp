//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//Back-end complete function Template for C++

class Solution {
  public:
    int minCostRecur(int i, vector<int> &cost, vector<int> &memo) {
    
    // Base case
    if (i==0 || i==1) {
        return cost[i];
    }
    
    // If value is memoized
    if (memo[i]!=-1) return memo[i];
    
    return memo[i] = cost[i] + 
    min(minCostRecur(i-1, cost, memo), 
    minCostRecur(i-2, cost, memo));
}
    int minCostClimbingStairs(vector<int>& cost) {
        // Write your code here
        int n = cost.size();
    
    if (n==1) return cost[0];
    
    vector<int> memo(n, -1);
    
    // Return minimum of cost to 
    // climb (n-1)th stair and 
    // cost to reach (n-2)th stair
    return min(minCostRecur(n-1, cost, memo), 
               minCostRecur(n-2, cost, memo));
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t-- > 0) {
        string str;
        getline(cin, str);

        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution sln;
        int res = sln.minCostClimbingStairs(arr);
        cout << res << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends