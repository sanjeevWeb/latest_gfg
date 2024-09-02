//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    string removeConsonants(string s){
    //complete the function heredef removeConsonants(s):
     string temp = "";
        for(char c : s){
            if((c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') ||
              (c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U')){
                temp += c;
            }
        }
        if(!temp.empty())
            return temp;
        return "No Vowel";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.removeConsonants(s) << "\n";
    }
return 0;
}
// } Driver Code Ends