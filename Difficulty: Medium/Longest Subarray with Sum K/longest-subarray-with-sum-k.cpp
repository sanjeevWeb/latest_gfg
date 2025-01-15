//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int, int>
            prefixSumIndices; // Maps cumulative sum to its earliest index
        int currentSum = 0, longestLength = 0;

        // Traverse through the array
        for (int i = 0; i < arr.size(); i++) {
            currentSum += arr[i]; // Accumulate the current sum

            // Check if subarray starting from index 0 equals k
            if (currentSum == k)
                longestLength = i + 1;

            // If (currentSum - k) exists in the map, update longestLength
            if (prefixSumIndices.find(currentSum - k) != prefixSumIndices.end()) {
                longestLength =
                    max(longestLength, i - prefixSumIndices[currentSum - k]);
            }

            // Store the current sum in the map if it hasn't been stored yet
            if (prefixSumIndices.find(currentSum) == prefixSumIndices.end())
                prefixSumIndices[currentSum] = i;
        }

        return longestLength; // Return the length of the longest subarray
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends