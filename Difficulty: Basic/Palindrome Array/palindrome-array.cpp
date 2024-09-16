//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isPerfect(vector<int> &arr) {
        // code here
        int j=0;
        int n = arr.size();
        int dummyArr[n] = {0};
        for(int i=n-1;i>=0;i--){
            dummyArr[j] = arr[i];
            j++;
        }
        
        for(int i=0;i<n;i++){
            if(dummyArr[i] != arr[i]){
                return false;
            }
        }
        
        return true;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }

        Solution obj;
        bool res = obj.isPerfect(nums);

        if (res)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}

// } Driver Code Ends