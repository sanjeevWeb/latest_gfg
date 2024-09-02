//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	int countSubstringWithEqualEnds(string s)
	{
	    // Your code goes here
	    int length = s.length();
        std::vector<int> count(26, 0);
        
        // Count the frequency of each character
        for(char c : s) {
            count[c - 'a']++;
        }
    
        // Calculate the number of substrings with equal starting and ending characters
        for(int i : count) {
            if(i > 1) {
                int temp = i * (i - 1) / 2;
                length += temp;
            }
        }
    
        return length;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   	    Solution ob;

   		cout << ob.countSubstringWithEqualEnds(str) << "\n";
   	}

    return 0;
}
// } Driver Code Ends