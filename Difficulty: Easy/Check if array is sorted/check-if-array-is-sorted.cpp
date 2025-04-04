//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    bool arraySortedOrNot(vector<int>& arr) {
        // code here
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
              if (arr[j] < arr[i])
                return false;
            }
      }
    
      return true;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        bool ans = ob.arraySortedOrNot(nums);
        cout << (ans ? "true" : "false") << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends