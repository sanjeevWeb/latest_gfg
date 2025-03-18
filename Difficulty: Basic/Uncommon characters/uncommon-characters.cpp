//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string uncommonChars(string& s1, string& s2) {
        // code here
        set<char>st1(s1.begin(),s1.end());
        set<char>st2(s2.begin(),s2.end());
        string ans ="";
        
        for(char ch : st1){
            if(st2.find(ch) == st2.end()){
                ans += ch;
            }
        }
        for(char c : st2){
            if(st1.find(c) == st1.end()){
                ans += c;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A;
        cin >> B;
        Solution ob;
        cout << ob.uncommonChars(A, B);
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends