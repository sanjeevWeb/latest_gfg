//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int i = 0;      // Initialize the starting pointer of the sliding window
        int sum = 0;    // Initialize the sum of the current window
    
        // Iterate through the array with the ending pointer of the sliding window
        for (int j = 0; j < arr.size(); j++) {
            sum += arr[j]; // Add the current element to the sum
    
            // While the current sum is greater than the target and the window is valid
            while (sum > target && i <= j) {
                sum -= arr[i]; // Remove the element at the start of the window
                i++;           // Shrink the window from the left
            }
    
            // If the sum of the current window equals the target
            if (sum == target) {
                // Return the 1-based indexes of the start and end of the subarray
                return {i + 1, j + 1};
            }
        }
    
        // If no subarray with the given sum is found, return -1
        return {-1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends