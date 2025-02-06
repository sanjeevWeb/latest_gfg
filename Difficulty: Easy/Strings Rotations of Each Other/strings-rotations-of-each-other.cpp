//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string &s1, string &s2) {
        // Your code here
        if (s1.size() != s2.size()) return false;
        map<int,int> mp;
        for(auto x:s1){
            mp[x]++;
        }
        for(auto x:s2){
            mp[x]--;
        }
        for(auto x:mp){
            if(x.second!=0){
                return false;
            }
        }
        string temp = s2 + s2;
        int n = s1.size();
        
        for (int i = 0; i < temp.size() - n + 1; i++) {
            int j = 0;
            while (j < n && temp[i + j] == s1[j]) {
                j++;
            }
            if (j == n) return true;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        string s2;
        cin >> s1 >> s2;
        Solution sol;
        int result = sol.areRotations(s1, s2);
        if (result) {
            cout << "true" << endl;

        } else {
            cout << "false" << endl;
        }
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends