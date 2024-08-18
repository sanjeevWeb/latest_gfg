//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution{
    
    public:
        bool isVowel(char x)
        {
            if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
                return true;
            else
                return false;
        }

    string Sandwiched_Vowel(string a){
        // Your code goes here
        int n = a.size();
        string updatedString = "";
        // updatedString += a[0];
        for(int i=0;i<n;i++){
            if (!i || i == n - 1) {
                updatedString += a[i];
                continue;
            }
             if (isVowel(a[i]) && !isVowel(a[i - 1]) && !isVowel(a[i + 1])) {
                continue;
            }
            updatedString += a[i];
            
        }
        
        return updatedString;
    }
};

//{ Driver Code Starts.

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        string ans = obj.Sandwiched_Vowel(s);
        cout<<ans<< endl;
    }

	return 0;
}
// } Driver Code Ends