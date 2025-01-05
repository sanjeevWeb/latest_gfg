//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to check if a string can be obtained by rotating
    // another string by exactly 2 places.
    void rotateClockwise(string &s){
        char c = s[s.size() -1];
        int i = s.size() -2;
        while(i >=0){
            s[i+1] = s[i];
            i--;
        }
        s[0] = c;
    
    }
    
    void rotateAnti(string &s){
        char c = s[0];
        int i = 1;
        while(i <= s.size()-1){
            s[i -1] = s[i]; 
            i++;
        }
       s[s.size() -1]= c;
    }
    bool isRotated(string& s1, string& s2) {
        if(s1.size() != s2.size()) return false;
        string clockwise , anticlockwise;
        clockwise = s1;
        rotateClockwise(clockwise);
        rotateClockwise(clockwise);
        if(clockwise ==s2) return true;
        anticlockwise = s1;
        rotateAnti(anticlockwise);
        rotateAnti(anticlockwise);
        if(anticlockwise == s2) return true;
        return false;
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        string b;
        cin >> s >> b;
        cin.ignore();
        Solution obj;
        cout << (obj.isRotated(s, b) == 0 ? "false" : "true") << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends