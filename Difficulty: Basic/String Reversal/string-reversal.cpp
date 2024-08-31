//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}

// } Driver Code Ends


string reverseString(string s)
{
    //code here.
    int a= s.length();
    string st;
    unordered_map<char, int> mp;
    for(int i=a-1;i>=0;i--)
    {
        mp[s[i]]++;
        if( mp[s[i]]==1 && s[i]!=' ')
        st =st + s[i];
    }
    return st;
    
}