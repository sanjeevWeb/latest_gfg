//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        std::sort(arr.begin(), arr.end());

    // Step 2: Initialize pointers and the count variable
    int left = 0;               // Points to the beginning of the array
    int right = arr.size() - 1; // Points to the end of the array
    int count = 0;              // Tracks the number of valid pairs

    // Step 3: Iterate until the left pointer is less than the right pointer
    while (left < right) {
        // Calculate the sum of the elements at the two pointers
        int sum = arr[left] + arr[right];

        // Step 4: Check if the sum is less than the target
        if (sum < target) {
            // All pairs between the current `left` and `right` will have sums < target
            // All pairs from (left, right), (left, right - 1), ..., (left, left + 1)
            count += (right - left);

            // Move the left pointer to the right to check the next potential pair
            left++;
        } else {
            // If the sum is greater than or equal to the target, move the right pointer to the left
            // This decreases the sum and may result in valid pairs
            right--;
        }
    }

    // Step 5: Return the total count of valid pairs
    return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;
        int res = ob.countPairs(arr, target);
        cout << res << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends