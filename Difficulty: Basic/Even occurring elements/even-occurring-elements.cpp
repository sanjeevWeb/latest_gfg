//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findEvenOccurrences(vector<int>& arr) {
        // code here
        // unordered_map<int,int>umap;
        unordered_map<int, int> mp;
        unordered_map<int, bool> added;  // To track whether an element is already added to the result
        vector<int> ans;
    
        // Count occurrences of each number
        for (int num : arr) {
            mp[num]++;
        }
    
        // Collect numbers with even occurrences in the original order
        for (int num : arr) {
            if (mp[num] % 2 == 0 && !added[num]) {
                ans.push_back(num);
                added[num] = true;  // Mark as added
            }
        }
    
        // If no elements with even occurrences, return {-1}
        if (ans.empty()) {
            return {-1};
        }
    
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the number of test cases
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        vector<int> result = ob.findEvenOccurrences(arr);
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends