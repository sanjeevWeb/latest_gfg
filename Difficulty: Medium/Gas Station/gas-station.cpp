//{ Driver Code Starts
// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


/*You are required to complete this method*/
class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        // Your code here
        int n = gas.size();
    int startIdx = 0;
    
    // Initially car tank is empty
    int currGas = 0;
    
    for(int i = 0; i < n; i++) {
        currGas = currGas + gas[i] - cost[i];
        
        // If currGas becomes less than zero, then
        // It's not possible to proceed with this startIdx
        if(currGas < 0) {
            startIdx = i + 1;
            currGas = 0;
        }
    }
    
    
    // Checking if startIdx can be a valid 
    // starting point for the Circular tour
    currGas = 0;
    for(int i = 0; i < n; i++) {
        
        // Circular Index
        int idx = (i + startIdx) % n;
      	currGas = currGas + gas[idx] - cost[idx];
        if(currGas < 0)
            return -1;
    }
    
    return startIdx;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function */
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {

        vector<int> gas, cost;
        string input1;
        getline(cin, input1);
        stringstream ss(input1);
        int number1;
        while (ss >> number1) {
            gas.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream sss(input2);
        int number2;
        while (sss >> number2) {
            cost.push_back(number2);
        }
        Solution ob;
        int ans = ob.startStation(gas, cost);

        cout << ans << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends