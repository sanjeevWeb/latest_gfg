//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string reverse(const string& S) {
        // code here
         stack < char> st ;
        string ans = ""; 
        for(int i=0 ; i<S.length() ;i++){
            st.push(S[i]);;
        }
        for(int i=0 ; i<S.length() ;i++){
            int element = st.top();
            st.pop();
            ans.push_back(element);
        }
        return ans ;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        Solution sol;
        string input;
        getline(cin, input);
        string reversed = sol.reverse(input);
        cout << reversed << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends