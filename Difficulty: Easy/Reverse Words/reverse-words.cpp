//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    string reverseWord(string word){
        string str = "";
        for(int i=word.size()-1; i>=0; i--){
            str += word[i];
        }
        return str;
    }
    
    // Function to reverse words in a given string.
    string reverseWords(string S) {
        // code here
        string temp = "";
        string output = "";
        for(int i=S.size()-1;i>=0;i--){
            if(S[i] == '.'){
                output += reverseWord(temp);
                output += '.';
                temp = "";
            }
            else{
                temp += S[i];
            }
        }
        output += reverseWord(temp);
        return output;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends