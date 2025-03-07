//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) {

        // your code here
         int n = arr.size();  

    // Loop to consider each element as a candidate for majority
    for (int i = 0; i < n; i++) {
        int count = 0; 

        // Inner loop to count the frequency of arr[i]
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Check if count of arr[i] is more than half the size of the array
        if (count > n / 2) {
            return arr[i]; 
        }
    }

    // If no majority element found, return -1
    return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.majorityElement(a) << endl;
    }

    return 0;
}

// } Driver Code Ends