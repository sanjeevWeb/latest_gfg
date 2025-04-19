//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int maxXor(vector<int> &arr) {
        // code here
        int res = 0, mask = 0;

    // to store all unique bits
    unordered_set<int> s;

    for (int i = 30; i >= 0; i--) {

        // set the i-th bit in mask
        mask |= (1 << i);

        for (auto value: arr) {

            // keep prefix of all elements
            // till the i-th bit
            s.insert(value & mask);
        }

        int cur = res | (1 << i);

        for (int prefix : s) {
            if (s.count(cur ^ prefix)) {
                res = cur;
                break;
            }
        }
        s.clear();
    }

    return res;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        Solution ob;
        cout << ob.maxXor(arr) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends