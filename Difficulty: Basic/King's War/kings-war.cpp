//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
        long long SoldierRequired(long long a[], long long n)
    {
        // Your code goes here   
        int count =0;
        sort(a,a+n);
        int s = a[0],l=a[n-1];
        for(int i=1;i<n; i++)
        {
            if(a[i]==s || a[i]==l)
            continue;
            else
            count++;
        }
        return count;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.SoldierRequired(a, n)<<endl;
    }
	return 0;
}
// } Driver Code Ends