//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> arranged(vector<int>& arr) {
        // code here
       vector<int> positiveVec, negativeVec;

        // Separate positive and negative numbers into
        // separate vectors
        int n=arr.size();
        for (int i = 0; i < n; ++i) {
            if (arr[i] >= 0)
                positiveVec.push_back(arr[i]);
            else
                negativeVec.push_back(arr[i]);
        }

        int posIndex = 0, negIndex = 0, arrIndex = 0;
        bool positiveTurn = true;

        // Merge positive and negative numbers alternatively
        while (posIndex < positiveVec.size()
               && negIndex < negativeVec.size()) {
            if (positiveTurn)
                arr[arrIndex++] = positiveVec[posIndex++];
            else
                arr[arrIndex++] = negativeVec[negIndex++];
            positiveTurn = !positiveTurn;
        }

        // Fill the remaining positive numbers, if any
        while (posIndex < positiveVec.size())
            arr[arrIndex++] = positiveVec[posIndex++];

        // Fill the remaining negative numbers, if any
        while (negIndex < negativeVec.size())
            arr[arrIndex++] = negativeVec[negIndex++];
        
        return arr;
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
        vector<int> ans = obj.arranged(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends