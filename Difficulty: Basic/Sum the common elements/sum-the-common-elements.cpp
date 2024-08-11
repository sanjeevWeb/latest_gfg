//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int commonSum(int n1, int n2, vector<int> &arr1, vector<int> &arr2) {
        // code here
        const int MOD = 1e9 + 7;
        unordered_set<int> uniqueElements;

        // Read elements from arr1 and store in the hash set
        for (int i = 0; i < n1; ++i) {
            
            uniqueElements.insert(arr1[i]);
        }
    
        long long sum = 0; // Use long long to handle large sums
    
        // Check elements from arr2
        for (int i = 0; i < n2; ++i) {
            
            
            if (uniqueElements.count(arr2[i])) {
                sum += arr2[i];
                uniqueElements.erase(arr2[i]);
                sum %= MOD; // Apply modulo after each addition
            }
        }
        return sum;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n1;
        scanf("%d",&n1);
        
        
        int n2;
        scanf("%d",&n2);
        
        
        vector<int> arr1(n1);
        Array::input(arr1,n1);
        
        
        vector<int> arr2(n2);
        Array::input(arr2,n2);
        
        Solution obj;
        int res = obj.commonSum(n1, n2, arr1, arr2);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends