//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int minProduct(vector<int> &arr, int k) {
        // Complete the function
        long long int p=1;
        long long int div=1000000007;
        sort(arr.begin(),arr.end());
        for(auto i:arr)
        {
            if(k==0)
            {
                break;
            }
            p = (p*i)%div;
            k--;
        }
        return p;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minProduct(arr, k);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends