//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxNtype(vector<int>& arr) {
        // code here.
        int n=arr.size();
        int a=0;
        int b=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]) a++;
            else b++;
        }
        if(a==n-1) return 1;
        else if(b==n-1) return 2;
        else if(a<b) return 3;
        else if(a>b) return 4;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.maxNtype(arr);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends