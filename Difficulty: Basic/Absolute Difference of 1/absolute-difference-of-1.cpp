//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  bool isDiff1(int n) {
        while (n / 10) {
            int dig1 = n % 10;
            int dig2 = (n / 10) % 10;
            if (abs(dig1 - dig2) != 1)
                return false;

            n = n / 10;
        }
        return true;
    }
    
    vector<int> getDigitDiff1AndLessK(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (isDiff1(arr[i]) && arr[i] < k && arr[i] >= 10) {
                ans.push_back(arr[i]);
            }
        }
        return ans;
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
        vector<int> ans = obj.getDigitDiff1AndLessK(arr, k);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        // cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends