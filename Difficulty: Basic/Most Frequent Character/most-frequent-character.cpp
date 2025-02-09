//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string& str) {
        // Your code here
        unordered_map<char,int>mp;
     
    // to store length of string
    int n = str.length();
     sort(str.begin(),str.end());
    // to store answer 
    char ans;
     
    // to check count of answer character is less or greater
    // than another elements count
    int cnt=0;
     
    // traverse the string 
    for(int i=0 ;i<n ; i++){
        // push element into map and increase its frequency 
        mp[str[i]]++;
         
        // update answer and count
        if(cnt < mp[str[i]]){
            ans = str[i];
            cnt = mp[str[i]];
        }
    }
     
    return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution obj;
        cout << obj.getMaxOccuringChar(str) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends