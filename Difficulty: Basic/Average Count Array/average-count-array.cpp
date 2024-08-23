//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector<int> countArray(int a[], int n, int x){
        // Complete the function
        vector<int>avg;
        map<int,int> mp;
 
        // Array that stores the average
        // count for given array
        // int avg[N] = {0};
        int val, av;
 
        for (int i = 0; i < n; i++) 
        {
            // first occurrence of a[i]
            if (mp[a[i]] == 0)
                mp[a[i]] = 1;
             
            else
                mp[a[i]]++;
             
 
            // element has already occurred before
            // so increase its count
        }
 
        for (int i = 0; i < n; i++) 
        {
            av = int((a[i] + x) / 2);
            if (mp.find(av) != mp.end())
            {
                val = mp[av];
                avg.push_back(val);
            }
            else{
                avg.push_back(0);
            }
        }
        return avg;
    }

};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n;
        cin>>x;
        int a[n+1];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        vector<int> b;
        Solution obj;
        b = obj.countArray(a, n, x);
        for(int i=0;i<n;i++)
            cout << b[i] << " ";
        
        cout << endl;
    }
}

// } Driver Code Ends