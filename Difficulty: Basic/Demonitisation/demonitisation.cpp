//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    string demonitize(string s, string m, string n) {
        // code here
        int len1 = m.length(), len2 = n.length();
        while(s.find(m) != string::npos){
            int i = s.find(m);
            s.erase(i, len1);
        }
        while(s.find(n) != string::npos){
            int i = s.find(n);
            s.erase(i, len2);
        }
        return s.empty() || s.length() == 1? "-1" : s;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, m, n;

        cin >> S;
        cin >> m;
        cin >> n;

        Solution ob;
        cout << ob.demonitize(S, m, n) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends