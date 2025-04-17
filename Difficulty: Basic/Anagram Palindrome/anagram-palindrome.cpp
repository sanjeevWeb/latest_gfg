//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	
cout << "~" << "\n";
}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int isPossible (string S)
{
    // your code here
    unordered_map<char, int> mp;
    for(auto i : S) {
        mp[i]++;
    }

    int countOdd = 0;
    for(auto i : mp) {
        if(i.second % 2 != 0) {
            countOdd++;
        }
    }

    // If count of characters with odd frequency is more than 1,
    // it means a palindrome cannot be formed. Otherwise, a palindrome can be formed.
    if(countOdd > 1) {
        return false;
    } else {
        return true;
    }
}