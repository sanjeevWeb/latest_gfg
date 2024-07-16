//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        int index = -1;
        int occurance = 0;
        
        for(int i=0;i<s.size();i++){
            if(s[i] == ch){
                occurance++;
                index = i;
            }
            if(occurance == count){
                break;
            }
        }
        if(occurance < count){
            return "";
        }
        string str = "";
        if(index < s.size() -1) {
            for(int i = index+1;i<s.size();i++){
            str += s[i];
        }
        }
        else {
            return "";
        }
        // if(occurance > count){
        //     index = count-1;
        // }
        
        return str;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        char ch;
        int count;

        cin >> s >> ch >> count;
        Solution ob;
        cout << ob.printString(s, ch, count) << "\n";
    }

    return 0;
}
// } Driver Code Ends